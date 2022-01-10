/*
Copyright 2022 Regan Palmer

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x726B
#define PRODUCT_ID      0x6D73
#define DEVICE_VER      0x0001
#define MANUFACTURER    Rainkeebs
#define PRODUCT         Minisub

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* Matrix */

#define MATRIX_ROW_PINS { D7, B5, F7, D4 }
#define MATRIX_COL_PINS { D2, D3, D5, D6, B4, B6, F6, F5, F4, F1, F0, B3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* rgb */
#define RGB_DI_PIN D0
#define RGBLED_NUM 20

