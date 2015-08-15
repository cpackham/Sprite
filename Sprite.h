/*
    Copyright (c) 2015 Chris Packham

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef Sprite_h
#define Sprite_h

#include <Arduino.h>
#include <LiquidCrystal.h>

class Sprite
{
  public:
    Sprite(LiquidCrystal *lcd);
    void begin(void);
    byte next();
  protected:
    void loadFrames(byte frames[][8], int num);
    LiquidCrystal *_lcd;
    int _curr_frame, _num_frames;
};
#endif
