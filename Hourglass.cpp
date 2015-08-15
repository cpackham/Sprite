#include <Hourglass.h>

Hourglass::Hourglass(LiquidCrystal *lcd) :Sprite(lcd) {}

void Hourglass::begin()
{
  byte frames[][8] = {
    {
      B11111,
      B11111,
      B11111,
      B01110,
      B00100,
      B01010,
      B10001,
      B11111,
    }, {
      B11111,
      B10001,
      B11111,
      B01110,
      B00100,
      B01010,
      B11111,
      B11111,
    }, {
      B11111,
      B10001,
      B10001,
      B01110,
      B00100,
      B01110,
      B11111,
      B11111,
    }, {
      B11111,
      B10001,
      B10001,
      B01010,
      B00100,
      B01110,
      B11111,
      B11111,
    },
  };

  loadFrames(frames, sizeof(frames)/sizeof(frames[0]));
}

