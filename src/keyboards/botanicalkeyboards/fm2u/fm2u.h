/* Copyright 2020 mechmerlin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_100u( \
    k00 \
) \
{ \
    { k00 } \
}

#define LAYOUT_125u LAYOUT_100u
#define LAYOUT_150u LAYOUT_100u
#define LAYOUT_175u LAYOUT_100u
#define LAYOUT_200u LAYOUT_100u
#define LAYOUT_225u LAYOUT_100u
#define LAYOUT_275u LAYOUT_100u
#define LAYOUT_300u LAYOUT_100u
#define LAYOUT_600u LAYOUT_100u
#define LAYOUT_625u LAYOUT_100u
#define LAYOUT_700u LAYOUT_100u
#define LAYOUT_iso  LAYOUT_100u
