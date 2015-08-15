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
#include <Smiley.h>

Smiley::Smiley(LiquidCrystal *lcd) :Sprite(lcd) {}

void Smiley::begin()
{
  byte frames[][8] = {
    {
      B00000,
      B01010,
      B01010,
      B01010,
      B00000,
      B10001,
      B01110,
      B00000,
    }, {
      B00000,
      B01000,
      B01010,
      B01010,
      B00000,
      B10001,
      B01110,
      B00000,
    }, {
      B00000,
      B01010,
      B01010,
      B01010,
      B00000,
      B10001,
      B01110,
      B00000,
    }, {
      B00000,
      B00010,
      B01010,
      B01010,
      B00000,
      B10001,
      B01110,
      B00000,
    }, {
      B00000,
      B01010,
      B01010,
      B01010,
      B00000,
      B11111,
      B00000,
      B00000,
    }
  };

  loadFrames(frames, sizeof(frames)/sizeof(frames[0]));
}

