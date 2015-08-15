#ifndef Hourglass_h
#define Hourglass_h

#include <Sprite.h>

class Hourglass: public Sprite
{
  public:
    Hourglass(LiquidCrystal *lcd);
    void begin(void);
};

#endif
