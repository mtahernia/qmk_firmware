/* Copyright 2023 Rick Sanchez
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
[0] = LAYOUT(
        KC_TAB,     KC_Q,      KC_W,      KC_E,     KC_R,       KC_T,                       KC_Y,       KC_U,      KC_I,      KC_O,      KC_P,      KC_BSPC, KC_ESC, 
        KC_A,    KC_S,    KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN, KC_ENT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,       MO(2),  KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_LCTL, KC_LGUI, KC_NO,  KC_LALT, MO(1), KC_SPC, KC_RALT, MO(3), KC_RSFT),
[1] = LAYOUT(KC_NO, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_NO, KC_MS_ACCEL0, KC_NO, KC_NO, KC_NO, MACRO(14), MACRO(15), KC_DEL, KC_NO, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_NO, KC_MS_ACCEL1, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, MACRO(0), MACRO(1), MACRO(2), MACRO(3), MACRO(4), KC_TRNS, MACRO(5), MACRO(6), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO, KC_NO),
[2] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_QUOT, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_RGHT, KC_RSFT),
[3] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)
};
[3] = LAYOUT(
        KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
        KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,          KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,    KC_TRNS,                         KC_TRNS,   KC_TRNS,          KC_TRNS,   KC_TRNS,                         KC_TRNS,   KC_TRNS,   KC_TRNS
        ),