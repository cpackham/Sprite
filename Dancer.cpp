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
#include <Dancer.h>

Dancer::Dancer(LiquidCrystal *lcd) :Sprite(lcd) {}

void Dancer::begin()
{
  byte frames[][8] = {
    {
      B01110,
      B01110,
      B00100,
      B01110,
      B10101,
      B00100,
      B01010,
      B01010,
    }, {
      B11100,
      B11100,
      B01000,
      B11100,
      B11010,
      B01000,
      B01100,
      B01010,
    }, {
      B01110,
      B01110,
      B00100,
      B01110,
      B10101,
      B00100,
      B01100,
      B01100,
    }, {
      B00111,
      B00111,
      B00010,
      B00111,
      B01011,
      B00010,
      B00110,
      B01010,
    }
  };

  loadFrames(frames, sizeof(frames)/sizeof(frames[0]));
}
