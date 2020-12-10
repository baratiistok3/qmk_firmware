/* Copyright 2018 MechMerlin
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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT( /* Base */
  KC_A,         KC_B,           KC_C,       KC_D,       KC_E,       KC_F,       KC_G,       KC_H,       KC_J,       KC_I,       KC_K,       KC_L,       KC_M,           KC_N,           KC_O, \
  KC_P,         KC_Q,           KC_R,       KC_S,       KC_T,       KC_U,       KC_V,       KC_W,       KC_X,       KC_Y,       KC_Z,       KC_0,       KC_1,           KC_2,           KC_3, \
  KC_4,         KC_5,           KC_6,       KC_7,       KC_8,       KC_9,       KC_ENTER,   KC_ESCAPE,  KC_BSPACE,  KC_TAB,     KC_SPACE,   KC_MINUS,   KC_EQUAL,       KC_LBRACKET,    KC_RBRACKET, \
  KC_BSLASH,    KC_NONUS_HASH,  KC_SCOLON,  KC_QUOTE,   KC_GRAVE,   KC_COMMA,   KC_DOT,     KC_SLASH,   KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,          KC_F6,          KC_F7, \
  KC_F8,        KC_F9,          KC_F10,     KC_F11,     KC_F12,     KC_F13,     KC_F14,     KC_F15,     KC_F16,     KC_F17,     KC_F18,     KC_F19,     KC_F20,         KC_F21,         KC_F22, \
  KC_F22,       KC_F23,         KC_F24,     KC_HOME,    KC_HOME,    KC_DELETE,  KC_END,     KC_PGDOWN,  KC_RIGHT,   KC_LEFT,    KC_DOWN,    KC_UP,      KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS, \
  KC_KP_PLUS,   KC_KP_ENTER,     KC_KP_1,    KC_KP_2,    KC_KP_3,    KC_KP_4,    KC_KP_5,    KC_KP_6,    KC_KP_7,    KC_KP_8,    KC_KP_9,    KC_KP_0,    KC_KP_DOT,      KC_KP_EQUAL,    KC_SPC, \
  KC_D,         KC_O,  KC_N, KC_U, KC_T, KC_C, KC_A, KC_T, KC_SPC, KC_R, KC_U, KC_L, KC_E, KC_S, KC_SPC, \
  KC_D,  KC_O,  KC_N, KC_U, KC_T, KC_C, KC_A, KC_T, KC_SPC, KC_R, KC_U, KC_L, KC_E, KC_S, KC_SPC, \
  KC_D,  KC_O,  KC_N, KC_U, KC_T, KC_C, KC_A, KC_T, KC_SPC, KC_R, KC_U, KC_L, KC_E, KC_S, KC_SPC, \
  KC_D,  KC_O,  KC_N, KC_U, KC_T, KC_C, KC_A, KC_T, KC_SPC, KC_R, KC_U, KC_L, KC_E, KC_S, KC_SPC, \
  KC_D,  KC_O,  KC_N, KC_U, KC_T, KC_C, KC_A, KC_T, KC_SPC, KC_R, KC_U, KC_L, KC_E, KC_S, KC_SPC, \
  KC_D,  KC_O,  KC_N, KC_U, KC_T, KC_C, KC_A, KC_T, KC_SPC, KC_R, KC_U, KC_L, KC_E, KC_S, KC_SPC, \
  RESET,  KC_O,  KC_N, KC_U, KC_T, KC_C, KC_A, KC_T, KC_SPC, KC_R, KC_U, KC_L, KC_E, KC_S, KC_SPC, \
  KC_A,  KC_O,  KC_N, KC_U, KC_T, KC_C, KC_A, KC_T, KC_SPC, KC_R, KC_U, KC_L, KC_E, KC_S, KC_SPC \
),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
