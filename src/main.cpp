#include <EEPROM.h>
#include <Music.hpp>
#include <tracks.hpp>
#include <Reactduino.h>
#include <StepperMotor.hpp>

#define SWITCHBTN 3
#define PLAYBTN 7
#define STEPS 10

bool isPlaying = false;
int curNote = 0;
byte trackNum;

// Шаговый двигатель
StepperMotor stepper{8, 9, 10, 11, 1200};

// Массив треков
Music tracks[] = {gta, gf, hp};

// Функция перезагрузки программы
void (*Reset)(void) = 0; // объявляем функцию reset с адресом 0

// Callback функции по нажатию кнопок
void button_play() {
  static uint32_t last_time; // last execution time for debouncing
  uint32_t now = millis();

  if (now - last_time >= 100) { // ignore calls closer than 100ms (debouncing)
    isPlaying = !isPlaying;
    last_time = now;
  }
}

void button_switch() {
  static uint32_t last_time; // last execution time for debouncing
  uint32_t now = millis();

  if (now - last_time >= 100) { // ignore calls closer than 100ms (debouncing)
    last_time = now;

    // Переключение трека
    if (trackNum >= 2)
      EEPROM.write(0, 0);
    else
      EEPROM.write(0, trackNum + 1);

    digitalWrite(PIEZO, LOW);
    delay(100);
    Reset();
  }
}

// Движение мотора
void move_stepper() {
  if (isPlaying)
    stepper.clockwise(STEPS);
}

// Воспроизведение музыки по нотам
void play_music() {
  if (isPlaying) {
    tracks[trackNum].theme[curNote]();
    curNote = (curNote < tracks[trackNum].length) ? curNote + 1 : 0;
  }
}

// Инициализация приложения
void app_main() {

  // Поделючение кнопок
  pinMode(PLAYBTN, INPUT);
  pinMode(SWITCHBTN, INPUT);

  // Подключение мотора
  stepper.setup();

  // Вывод названия трека
  EEPROM.write(0, trackNum = EEPROM.read(0));
  Serial.begin(9600);
  Serial.println(tracks[trackNum].name);

  // Функции, вызываемые по таймеру
  app.repeat(100, move_stepper);
  app.repeat(200, play_music);

  // Мониторинг нажатия кнопок
  app.onPinFallingNoInt(PLAYBTN, button_play);
  app.onPinFallingNoInt(SWITCHBTN, button_switch);
}

// Запуск приложения
Reactduino app(app_main);