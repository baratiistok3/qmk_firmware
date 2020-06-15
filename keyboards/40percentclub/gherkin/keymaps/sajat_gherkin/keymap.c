#include QMK_KEYBOARD_H
#include "keymap_steno.h"
#include "keymap_hungarian.h"
#define ST_BOLT QK_STENO_BOLT
#define ST_GEM  QK_STENO_GEMINI

enum {
  TD_X_WIN = 0,
  TD_O_OO = 1
};


enum keyboard_layers {
  _QWERTY,
  _ADJUST
};

enum combos {
  FG_PO,
  HJ_PC,
  DF_BO,
  JK_BC,
  WE_SQ,
  ER_DQ,
  SDF_SO,
  JKL_SC
};

#define ADJ_Z   LT(_ADJUST, KC_Z)

const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM sdf_combo[] = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};





combo_t key_combos[COMBO_COUNT] = {
  [FG_PO] = COMBO(fg_combo, HU_LPRN),
  [HJ_PC] = COMBO(hj_combo, HU_RPRN),
  [DF_BO] = COMBO(df_combo, HU_LCBR),
  [JK_BC] = COMBO(jk_combo, HU_RCBR),
  [WE_SQ] = COMBO(we_combo, HU_QUOT),
  [ER_DQ] = COMBO(er_combo, HU_DQUO),
  [SDF_SO] = COMBO(er_combo, HU_LBRC),
  [JKL_SC] = COMBO(er_combo, HU_RBRC)
};


qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_X_WIN]  = ACTION_TAP_DANCE_DOUBLE(KC_X, KC_LGUI),
  [TD_O_OO] = ACTION_TAP_DANCE_DOUBLE(KC_O, HU_OACU)
// Other declarations would go here, separated by commas, if you have them
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_ortho_3x10(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,   TD(TD_O_OO),    KC_P,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_RSFT,
    ADJ_Z,   TD(TD_X_WIN),    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M,    KC_ENT
  ),




  [_ADJUST] = LAYOUT_ortho_3x10(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP, XXXXXXX,  XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET
  ),

};
