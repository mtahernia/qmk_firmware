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
            QK_GESC,     KC_Q,     KC_W,      KC_E,      KC_R,      KC_T,                        KC_Y,      KC_U,     KC_I,      KC_O,       KC_P,      KC_BSLS ,KC_BSPC,
            KC_TAB,      KC_A,     KC_S,      KC_D,      KC_F,      KC_G,                        KC_H,      KC_J,     KC_K,      KC_L,       KC_SCLN,   KC_ENT,
            KC_LSFT,     KC_Z,     KC_X,      KC_C,      KC_V,      KC_B,             KC_B,      KC_N,      KC_M,     KC_COMM,   KC_DOT,     KC_UP,     MO(2),
            KC_LCTL,     KC_LALT,                        KC_LGUI,   KC_SPC,           KC_SPC,    MO(1),                          KC_LEFT,    KC_DOWN,   KC_RGHT
          ),
[1] = LAYOUT(
            QK_BOOT,     KC_1,     KC_2,      KC_3,      KC_4,      KC_5,                        KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_TRNS,  KC_TRNS,
            KC_INS,      KC_F1,    KC_F2,     KC_F3,     KC_F4,     KC_F5,                       KC_F6,     KC_MINS,   KC_EQL,    KC_LBRC,   KC_RBRC,   KC_BSLS,
            KC_TRNS,     KC_F7,    KC_F8,     KC_F9,     KC_F10,    KC_F11,           KC_F12,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_VOLD,     KC_MUTE,                        KC_VOLU,   KC_TRNS,          KC_TRNS,   KC_TRNS,                         KC_TRNS,   KC_TRNS,   KC_TRNS
          ), 
[2] = LAYOUT(
            QK_BOOT,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
            KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,          KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,    KC_TRNS,                         KC_TRNS,   KC_TRNS,          KC_TRNS,   KC_TRNS,                         KC_TRNS,   KC_TRNS,   KC_TRNS
          ),
[3] = LAYOUT(
            KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, KC_TRNS,
            KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,                     KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,          KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
            KC_TRNS,    KC_TRNS,                         KC_TRNS,   KC_TRNS,          KC_TRNS,   KC_TRNS,                         KC_TRNS,   KC_TRNS,   KC_TRNS
          ),
};


typedef union {
  uint32_t raw;
  struct {
    bool rgb_layer_change :1;
  };
} user_config_t;

user_config_t user_config;

void keyboard_pre_init_user(void) {
  // Call the keyboard pre init code.
  // Set our LED pins as output
#ifdef RGBLIGHT_ENABLE
  setPinOutput(WS2812_DI_PIN);
#endif

}


void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_ENABLE
  rgblight_enable();
  // rgblight_sethsv(RGBLIGHT_DEFAULT_HUE,RGBLIGHT_DEFAULT_SAT,RGBLIGHT_DEFAULT_VAL)
  rgblight_mode_noeeprom(RGBLIGHT_DEFAULT_MODE);
#endif
}

void eeconfig_init_user(void) {  // EEPROM is getting reset!
  user_config.raw = 0;
  user_config.rgb_layer_change = true; // We want this enabled by default
  eeconfig_update_user(user_config.raw); // Write default value to EEPROM now

  // use the non noeeprom versions, to write these values to EEPROM too
#ifdef RGBLIGHT_ENABLE
  // rgblight_enable(); // Enable RGB by default
  rgblight_sethsv(HSV_WHITE);  // Set it to CYAN by default
  rgblight_mode(RGBLIGHT_DEFAULT_MODE); // set to solid by default
#endif
}
