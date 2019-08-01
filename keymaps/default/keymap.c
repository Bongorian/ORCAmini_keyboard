/* Copyright 2019 bongorian
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

// Defines the keycodes used by our macros in process_record_user
enum keymap_layer {
  BASE,
  L1,
  L2,
  L3,
  L4,
  L5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
    LCTL(KC_C), LCTL(KC_x),KC_F1, TO(L4),
    LCTL(KC_V), LCTL(),SFT_T(KC_UP), TO(L1),
    KC_RETURN, KC_SLASH, KC_DOWN, TO(L2),
    KC_QUOTE, KC_ESCAPE, KC_LEFT, TO(L3),
    LCTL(KC_Z), LCTL(KC_S), KC_RIGHT, TO(L5
  ),
  [L1] = LAYOUT(
    KC_EXLM, KC_COLN,KC_F1, TO(L4),
    KC_EQUAL, KC_HASH,SFT_T(KC_UP), TO(L1),
    KC_ASTR, KC_TILD, KC_DOWN, TO(L2),
    KC_SCOLON, KC_ESCAPE, KC_LEFT, TO(L3),
    KC_SPACE, KC_QUESTION, KC_RIGHT, TO(L5)
  ),
  [L2] = LAYOUT(
    KC_LPRN, KC_MINUS, KC_F1, TO(L4),
    KC_PLUS, KC_RPRN,SFT_T(KC_UP), TO(L1),
    KC_LBRACKET, KC_LCBR, KC_DOWN, TO(L2),
    KC_RCBR, KC_RBRACKET, KC_LEFT, TO(L3),
    KC_LABK, KC_RABK, KC_RIGHT, TO(L5)
  ),
};
