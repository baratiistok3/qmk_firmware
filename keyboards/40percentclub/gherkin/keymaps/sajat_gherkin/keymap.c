#include QMK_KEYBOARD_H
#include "keymap_steno.h"

#define ST_BOLT QK_STENO_BOLT
#define ST_GEM  QK_STENO_GEMINI

enum {
  TD_X_WIN = 0
};


enum keyboard_layers {
  _QWERTY,
  _ADJUST
};

#define ADJ_Z   LT(_ADJUST, KC_Z)

qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_X_WIN]  = ACTION_TAP_DANCE_DOUBLE(KC_X, KC_LGUI)
// Other declarations would go here, separated by commas, if you have them
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_RSFT,
    ADJ_Z,   TD(TD_X_WIN),    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M,    KC_ENT
  ),




  [_ADJUST] = LAYOUT_ortho_3x10(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET
  ),

};
