#ifndef MUSIC_H
#define MUSIC_H

#include <Arduino.h>

#define PIEZO 6
typedef void (*Theme)();

struct Music {
  String name;
  Theme *theme;
  int length = 0;

  Music(String n, Theme *t, int l) {
    name = n;
    theme = t;
    length = l;
  }

  ~Music() {
    delete theme;
  }
};

#endif // MUSIC_H
