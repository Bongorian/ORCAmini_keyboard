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
enum keymap_layer { BASE, L1, L2, L3, L4, L5, NUM, BENRI };
enum custom_keycodes {
  RASPBERRY = SAFE_RANGE,
  PI,
  CD,
  LS,
  SUDO,
  GIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[BASE] = LAYOUT(LCTL(KC_C), LCTL(KC_X), KC_F1, TO(L4), LCTL(KC_V), KC_SPACE, SFT_T(KC_UP), TO(L1), KC_ESCAPE, KC_SLASH, KC_DOWN, TO(L2), KC_QUOTE, KC_ENTER, KC_LEFT, TO(L3), LCTL(KC_Z), LCTL(KC_S), KC_RIGHT, TO(L5)),
                                                              [L1]   = LAYOUT(KC_EXLM, KC_COLN, KC_F1, TO(L4), KC_EQUAL, KC_HASH, SFT_T(KC_UP), TO(BASE), KC_ASTR, KC_TILD, KC_DOWN, TO(L2), KC_SCOLON, KC_ESCAPE, KC_LEFT, TO(L3), KC_SPACE, KC_QUESTION, KC_RIGHT, TO(L5)),
                                                              [L2]   = LAYOUT(KC_LPRN, KC_MINUS, KC_F1, TO(L4), KC_PLUS, KC_RPRN, SFT_T(KC_UP), TO(L1), KC_LBRACKET, KC_LCBR, KC_DOWN, TO(BASE), KC_RCBR, KC_RBRACKET, KC_LEFT, TO(L3), KC_LABK, KC_RABK, KC_RIGHT, TO(L5)),
                                                              [L3]   = LAYOUT(KC_A, KC_S, KC_F1, TO(L4), KC_D, KC_F, SFT_T(KC_UP), TO(L1), KC_Z, KC_X, KC_DOWN, TO(L2), KC_C, KC_BSPACE, KC_LEFT, TO(BASE), KC_Q, KC_W, KC_RIGHT, TO(L5)),
                                                              [L4]   = LAYOUT(KC_G, KC_H, KC_F1, TO(BASE), KC_J, KC_K, SFT_T(KC_UP), TO(L1), KC_V, KC_B, KC_DOWN, TO(L2), KC_SPACE, KC_BSPACE, KC_LEFT, TO(L3), KC_E, KC_R, KC_RIGHT, TO(L5)),
                                                              [L5]   = LAYOUT(KC_L, KC_U, KC_F1, TO(L4), KC_I, KC_O, SFT_T(KC_UP), TO(L1), KC_N, KC_M, KC_DOWN, TO(L2), KC_P, TO(NUM), KC_LEFT, TO(L3), KC_T, KC_Y, KC_RIGHT, TO(BASE)),
                                                              [NUM]  = LAYOUT(KC_2, KC_3, KC_SPACE, KC_ENTER, KC_4, KC_5, KC_UP, KC_LSHIFT, KC_6, KC_7, KC_DOWN, KC_ESCAPE, KC_8, KC_9, KC_LEFT, TO(BASE), KC_0, KC_1, KC_RIGHT, TO(BENRI)),
                                                              [BENRI]  = LAYOUT(RASPBERRY, PI,  MO(BASE), KC_ENTER, CD, LS, MO(L4),MO(BASE) SUDO, GIT, MO(NUM),MO(L2), KC_BSPACE, KC_ENTER, MO(L3),TO(BASE),KC_SPACE,KC_UP,MO(L5),TO(BASE))};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RASPBERRY:
            if (record->event.pressed) {
                // pressed
                SEND_STRING("raspberry");
            } else {
                // released
            }
            break;
        case PI:
            if (record->event.pressed) {
                // pressed
                SEND_STRING("pi");
            } else {
                // released
            }
            break;
        case CD:
            if (record->event.pressed) {
                // pressed
                SEND_STRING("cd");
            } else {
                // released
            }
            break;
        case LS:
            if (record->event.pressed) {
                // pressed
                SEND_STRING("ls");
            } else {
                // released
            }
            break;
        case SUDO:
            if (record->event.pressed) {
                // pressed
                SEND_STRING("sudo");
            } else {
                // released
            }
            break;
        case GIT:
            if (record->event.pressed) {
                // pressed
                SEND_STRING("git");
            } else {
                // released
            }
            break;
    }

    return true;
}
