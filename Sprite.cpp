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
#include <Arduino.h>
#include <Sprite.h>
#include <LiquidCrystal.h>

Sprite::Sprite(LiquidCrystal *lcd)
{
  _lcd = lcd;
}

void Sprite::begin()
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
      B01110,
      B01110,
      B00100,
      B11111,
      B00100,
      B00100,
      B01010,
      B10001,
    }, {
      B01110,
      B01110,
      B10101,
      B01110,
      B00100,
      B00100,
      B01010,
      B10001,
    }, {
      B01110,
      B01110,
      B00100,
      B11111,
      B00100,
      B00100,
      B01010,
      B10001,
    }, {
      B01110,
      B01110,
      B00100,
      B01110,
      B10101,
      B00100,
      B01010,
      B10001,
    }
  };

  loadFrames(frames, sizeof(frames)/sizeof(frames[0]));
}

void Sprite::loadFrames(byte frames[][8], int num)
{
  _curr_frame = 0;
  _num_frames = num - 1;

  for (int i = 0; i <= _num_frames; i++) {
    _lcd->createChar(i, frames[i]);
  }
}

byte Sprite::next()
{
  if (++_curr_frame > _num_frames)
    _curr_frame = 0;

  return byte(_curr_frame);
}
