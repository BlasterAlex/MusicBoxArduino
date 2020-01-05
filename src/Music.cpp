#include <Arduino.h>
#include <Music.hpp>

// Первая мелодия
Theme gtaT[] = {[] {
                  tone(PIEZO, 1244, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1567, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1244, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1174, 347.93775);
                  delay(386.5975);
                },
                [] {
                  tone(PIEZO, 1174, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1046, 115.97925);
                  delay(128.865833333);
                },
                [] {
                  tone(PIEZO, 1174, 231.9585);
                  delay(257.731666667);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 932, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 932, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 932, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1046, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 783, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1046, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 783, 231.9585);
                  delay(257.731666667);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1244, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1567, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1244, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1174, 347.93775);
                  delay(386.5975);
                },
                [] {
                  tone(PIEZO, 1174, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1046, 115.97925);
                  delay(128.865833333);
                },
                [] {
                  tone(PIEZO, 1174, 231.9585);
                  delay(257.731666667);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 932, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 932, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 932, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1046, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 783, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1046, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 783, 231.9585);
                  delay(257.731666667);
                },
                [] {
                  tone(PIEZO, 1174, 463.917);
                  delay(515.463333333);
                },
                [] {
                  tone(PIEZO, 783, 927.834);
                  delay(1030.92666667);
                },
                [] {
                  tone(PIEZO, 783, 463.917);
                  delay(515.463333333);
                },
                [] {
                  tone(PIEZO, 783, 463.917);
                  delay(515.463333333);
                },
                [] {
                  tone(PIEZO, 391, 927.834);
                  delay(1030.92666667);
                },
                [] {
                  tone(PIEZO, 1244, 463.917);
                  delay(515.463333333);
                },
                [] {
                  tone(PIEZO, 1174, 463.917);
                  delay(515.463333333);
                },
                [] {
                  tone(PIEZO, 783, 927.834);
                  delay(1030.92666667);
                },
                [] {
                  tone(PIEZO, 783, 463.917);
                  delay(515.463333333);
                },
                [] {
                  tone(PIEZO, 783, 463.917);
                  delay(515.463333333);
                },
                [] {
                  tone(PIEZO, 391, 1391.751);
                  delay(1546.39);
                }};
int gtaS = sizeof(gtaT) / sizeof(gtaT[0]);
Music gta("GRAND THEFT AUTO: SAN ANDREAS", gtaT, gtaS);

// Вторая мелодия
Theme gfT[] = {[] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 233, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 233, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 391, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 391, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 233, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 233, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 391, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 391, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 233, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 349, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 233, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 293, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 391, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 391, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 261, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 329, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 220, 140.625);
      delay(156.25);
    },
    [] {
      tone(PIEZO, 277, 140.625);
      delay(156.25);
    }};
int gfS = sizeof(gfT) / sizeof(gfT[0]);
Music gf("GRAVITY FALLS", gfT, gfS);

// Третья мелодия
Theme hpT[] = {[] {
  tone(PIEZO, 82, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 123, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 130, 750.0);
  delay(833.333333333);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 391, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 369, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 440, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 369, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 391, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 369, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 293, 375.0);
  delay(416.666666667);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 750.0);
  delay(833.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 391, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 369, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 587, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 554, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 523, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 261, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 440, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 523, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 220, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 440, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 750.0);
  delay(833.333333333);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 523, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 466, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 466, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 329, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 750.0);
  delay(833.333333333);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 195, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 587, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 554, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 523, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 261, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 440, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 523, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 220, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 493, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 440, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 391, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 220, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 195, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 184, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 82, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 164, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 97, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 146, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 329, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 246, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 164, 187.5);
  delay(208.333333333);
  }, [] {
  tone(PIEZO, 246, 375.0);
  delay(416.666666667);
  }, [] {
  tone(PIEZO, 1318, 1125.0);
  delay(1250.0);
}};
int hpS = sizeof(hpT) / sizeof(hpT[0]);
Music hp("HARRY POTTER", hpT, hpS);