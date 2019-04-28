#ifndef DACTYL24_H
#define DACTYL24_H

#include "config.h"

#include "quantum.h"

#define KEYMAP_6x6( \
  L11, L12, L13, L14, L15, L16,   R11, R12, R13, R14, R15, R16, \
  L21, L22, L23, L24, L25, L26,   R21, R22, R23, R24, R25, R26, \
  L31, L32, L33, L34, L35, L36,   R31, R32, R33, R34, R35, R36, \
            L43, L44,                       R43, R44,           \
                      L45, L46,   R41, R42,                     \
                      L55, L56,   R51, R52,                     \
                      L65, L66,   R61, R62                      \
) \
{ \
  { KC_##L11, KC_##L12, KC_##L13,   KC_##L14,   KC_##L15, KC_##L16 }, \
  { KC_##L21, KC_##L22, KC_##L23,   KC_##L24,   KC_##L25, KC_##L26 }, \
  { KC_##L31, KC_##L32, KC_##L33,   KC_##L34,   KC_##L35, KC_##L36 }, \
  { KC_NO,    KC_NO,    KC_##L43,   KC_##L44,   KC_##L45, KC_##L46 }, \
  { KC_NO,    KC_NO,    KC_NO,      KC_NO,      KC_##L55, KC_##L56 }, \
  { KC_NO,    KC_NO,    KC_NO,      KC_NO,      KC_##L65, KC_##L66 }, \
  { KC_##R11, KC_##R12, KC_##R13,   KC_##R14,   KC_##R15, KC_##R16 }, \
  { KC_##R21, KC_##R22, KC_##R23,   KC_##R24,   KC_##R25, KC_##R26 }, \
  { KC_##R31, KC_##R32, KC_##R33,   KC_##R34,   KC_##R35, KC_##R36 }, \
  { KC_##R41, KC_##R42, KC_##R43,   KC_##R44,   KC_NO,    KC_NO }, \
  { KC_##R51, KC_##R52, KC_NO,      KC_NO,      KC_NO,    KC_NO }, \
  { KC_##R61, KC_##R62, KC_NO,      KC_NO,      KC_NO,    KC_NO } \
}

#define KC_______ KC_TRNS
#define KC_XXXXXX KC_TRNS
#define KC_       KC_TRNS

#endif
