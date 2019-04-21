#include "dactyl24.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Define layers <==
#define _BASE     0

#define _NPNUMS   1
#define _NPSYMB   2
#define _ARROWS   3
#define _MOUSE    4
// ==>

enum custom_keycodes {
  BASE = SAFE_RANGE,
  NPNUMS,
  NPSYMB,
  ARROWS,
  MOUSE,
};

#define KC_LBRAK KC_LBRACKET
#define KC_RBRAK KC_RBRACKET

#define KC_ALTTAB   LALT(KC_TAB)
#define KC_CTLESC   LCTL(KC_ESC)
#define KC_COPYPS   LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen
#define KC_HREFSH   LGUI(LSFT(KC_R))        // Hard refresh
#define KC_SWAPW    LGUI(KC_GRV)            // Cmd + ` , swithch window
#define KC_FINDR    LGUI(LALT(KC_SPC))      // Finder search
#define KC_GUIBS    GUI_T(KC_BSPACE)
#define KC_CTLRET   CTL_T(KC_ENTER)

#define KC_NUMPDL   LT(_NPNUMS, KC_DELETE)
#define KC_ZYMBOL   MO(_NPSYMB)
#define KC_ARWSPC   LT(_ARROWS, KC_SPACE)
#define KC_MSEGRV   LT(_MOUSE, KC_GRAVE)
// ==>

// Fillers to make layering more clear
#define KC_______ KC_TRNS
#define KC_XXXXXX KC_TRNS
#define KC_       KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = KEYMAP_6x6(
  // LEFT HAND                                      RIGHT HAND
  //,------+------+------+------+------+------,    ,------+------+------+------+------+------,
     ALTTAB,   Q  ,   W  ,   E  ,   R  ,   T  ,        Y  ,   U  ,   I  ,   O  ,   P  ,BSLASH,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
     CTLESC,   A  ,   S  ,   D  ,   F  ,   G  ,        H  ,   J  ,   K  ,   L  ,SCOLON, QUOTE,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
      LSPO ,   Z  ,   X  ,   C  ,   V  ,   B  ,        N  ,   M  , COMMA,  DOT , SLASH, RSPC ,
  //`------+------,------+------,------+------'    `------+------,------+------,------+------'
                    LEFT , RIGHT,                                  DOWN ,  UP  ,
  //              `------+------'                                `------+------'
  //                         ,------+------,            ,------+------,
                              LBRAK , GUIBS,             ARWSPC, RBRAK,
  //                         |------+------|            |------+------|
                              HREFSH,NUMPDL,             CTLRET, EQUAL,
  //                         |------+------|            |------+------|
                              COPYPS,ZYMBOL,             MSEGRV, MINUS
  //                         `------+------'            `------+------'
  ),

  [_NPNUMS] = KEYMAP_6x6(
  // LEFT HAND                                      RIGHT HAND
  //,------+------+------+------+------+------,    ,------+------+------+------+------+------,
           ,      ,      ,      ,      ,      ,           ,   7  ,   8  ,   9  , PLUS ,      ,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
           ,      ,      ,      ,      ,      ,      UNDS ,   4  ,   5  ,   6  , SLASH,      ,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
           ,      ,      ,      ,      ,      ,           ,   1  ,   2  ,   3  , MINUS,      ,
  //`------+------,------+------,------+------'    `------+------,------+------,------+------'
                         ,      ,                                    0  , PDOT ,
  //              `------+------'                                `------+------'
  //                         ,------+------,            ,------+------,
                              LCBR  , GUIBS,              SPACE, RCBR ,
  //                         |------+------|            |------+------|
                              HREFSH,XXXXXX,             CTLRET, PLUS,
  //                         |------+------|            |------+------|
                              COPYPS,XXXXXX,              TILDE, UNDS
  //                         `------+------'            `------+------'
  ),

  [_NPSYMB] = KEYMAP_6x6(
  // LEFT HAND                                      RIGHT HAND
  //,------+------+------+------+------+------,    ,------+------+------+------+------+------,
           ,      ,      ,      ,      ,      ,           , AMPR , ASTR , TILDE, PLUS ,      ,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
           ,      ,      ,      ,      ,      ,      UNDS , DLR  ,  PERC,  CIRC, SLASH ,      ,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
           ,      ,      ,      ,      ,      ,           , EXLM ,  AT  ,  HASH, MINUS,      ,
  //`------+------,------+------,------+------'    `------+------,------+------,------+------'
                         ,      ,                                       ,      ,
  //              `------+------'                                `------+------'
  //                         ,------+------,            ,------+------,
                              LCBR  , GUIBS,              SPACE, RCBR ,
  //                         |------+------|            |------+------|
                              HREFSH,DELETE,             CTLRET, PLUS,
  //                         |------+------|            |------+------|
                              COPYPS,XXXXXX,              TILDE, UNDS
  //                         `------+------'            `------+------'
  ),

  [_ARROWS] = KEYMAP_6x6(
  // LEFT HAND                                      RIGHT HAND
  //,------+------+------+------+------+------,    ,------+------+------+------+------+------,
           , F14  ,  UP  , F15  , VOLU ,      ,           ,      ,      ,      ,      ,      ,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
           , LEFT , DOWN , RIGHT, VOLD ,      ,      LEFT ,  UP  , DOWN , RIGHT,       ,      ,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
           , MRWD , MPLY , MFFD , MUTE ,      ,           ,      ,      ,      ,      ,      ,
  //`------+------,------+------,------+------'    `------+------,------+------,------+------'
                         ,      ,                                       ,      ,
  //              `------+------'                                `------+------'
  //                         ,------+------,            ,------+------,
                              LCBR  , GUIBS,             XXXXXX, RCBR ,
  //                         |------+------|            |------+------|
                              HREFSH,DELETE,             CTLRET, PLUS,
  //                         |------+------|            |------+------|
                              COPYPS,XXXXXX,              TILDE, UNDS
  //                         `------+------'            `------+------'
  ),

  [_MOUSE] = KEYMAP_6x6(
  // LEFT HAND                                      RIGHT HAND
  //,------+------+------+------+------+------,    ,------+------+------+------+------+------,
           ,      , MS_U ,      , WBAK ,      ,           ,      ,      ,      ,      ,      ,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
           , MS_L , MS_D , MS_R ,HREFSH,      ,      WH_L , WH_D , WH_U , WH_R ,       ,      ,
  //|------+------+------+------+------+------|    |------+------+------+------+------+------|
           , ACL0 , ACL1 , ACL2 , WFWD ,      ,           ,      ,      ,      ,      ,      ,
  //`------+------,------+------,------+------'    `------+------,------+------,------+------'
                         ,      ,                                       ,      ,
  //              `------+------'                                `------+------'
  //                         ,------+------,            ,------+------,
                               BTN2 , BTN1 ,                   ,      ,
  //                         |------+------|            |------+------|
                                    ,      ,                   ,      ,
  //                         |------+------|            |------+------|
                                    ,XXXXXX,             XXXXXX,     
  //                         `------+------'            `------+------'
  ),
};

void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}
