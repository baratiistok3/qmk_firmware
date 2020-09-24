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
  _ADJUST,
  _MARKS,
  _NUMS,
  _CTRL
};

enum combos {
  SDF_SO,
  JKL_SC,
  FG_PO,
  HJ_PC,
  DF_BO,
  JK_BC,
  WE_SQ,
  ER_DQ,

};

#define ADJ_Z   LT(_ADJUST, KC_Z)
#define MARKS_A   LT(_MARKS, KC_A)
#define NUMS_S   LT(_NUMS, KC_S)
#define CTRL_ENT LT(_CTRL, KC_ENT)

const uint16_t PROGMEM sdf_combo[] = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};






combo_t key_combos[COMBO_COUNT] = {
  [SDF_SO] = COMBO(er_combo, HU_LBRC),
  [JKL_SC] = COMBO(er_combo, HU_RBRC),
  [FG_PO] = COMBO(fg_combo, HU_LPRN),
  [HJ_PC] = COMBO(hj_combo, HU_RPRN),
  [DF_BO] = COMBO(df_combo, HU_LCBR),
  [JK_BC] = COMBO(jk_combo, HU_RCBR),
  [WE_SQ] = COMBO(we_combo, HU_QUOT),
  [ER_DQ] = COMBO(er_combo, HU_DQUO)
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
    MARKS_A,    NUMS_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_RSFT,
    ADJ_Z,   TD(TD_X_WIN),    KC_C,    KC_V,    KC_BSPC, KC_SPC,  KC_B,    KC_N,    KC_M,    CTRL_ENT
  ),

 [_MARKS] = LAYOUT_ortho_3x10(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, HU_UNDS, XXXXXXX, XXXXXXX,  XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, HU_PLUS, HU_EXLM, HU_PERC, HU_SLSH,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, HU_EQL, HU_QUES, HU_COLN, HU_MINS
  ),
  [_NUMS] = LAYOUT_ortho_3x10(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_7, KC_8, KC_9,  XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_4, KC_5, KC_6, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV, KC_1, KC_2, KC_3, XXXXXXX
  ),

};


// #define HU_SECT S(HU_0)    // §
// #define HU_QUOT S(HU_1)    // '
// #define HU_DQUO S(HU_2)    // "
// #define HU_PLUS S(HU_3)    // +
// #define HU_EXLM S(HU_4)    // !
// #define HU_PERC S(HU_5)    // %
// #define HU_SLSH S(HU_6)    // /
// #define HU_EQL  S(HU_7)    // =
// #define HU_LPRN S(HU_8)    // (
// #define HU_RPRN S(HU_9)    // )
// // Row 4
// #define HU_QUES S(HU_COMM) // ?
// #define HU_COLN S(HU_DOT)  // :
// #define HU_UNDS S(HU_MINS) // _
