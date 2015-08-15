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
#include <Spinner.h>

Spinner::Spinner(LiquidCrystal *lcd) :Sprite(lcd) {}

void Spinner::begin()
{
  byte backslash[] = {
    B00000,
    B10000,
    B01000,
    B00100,
    B00010,
    B00001,
    B00000,
    B00000,
  };

  _lcd->createChar(0, backslash);
  _sequence = "\x00|/-";
  _num_frames = 3;
}

byte Spinner::next()
{
  if (++_curr_frame > _num_frames)
    _curr_frame = 0;

  return byte(_sequence[_curr_frame]);
}
