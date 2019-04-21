/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mystery
#define PRODUCT         FSJs Dactyl 4x6 keyboard
#define DESCRIPTION     An ergonomic split keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// Column-driven
// wiring of each half
// #define MATRIX_ROW_PINS { D4, C6, D7, E6, B4, B5 }
// #define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
// #define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 } //uncomment this line and comment line above if you need to reverse left-to-right key order

#define CATERINA_BOOTLOADER

/* COL2ROW or ROW2COL */
// Row-driven = switch cols and rows
//                         4,  5,  6,  7,  8,  9
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
//                        A1, A0, 15, 14, 16, 10 
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif