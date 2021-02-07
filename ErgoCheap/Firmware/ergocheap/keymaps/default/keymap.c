/* Copyright 2021 xSteins
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
	_BASE,
	_FN1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Base */
	[_BASE] = LAYOUT_65_ANSI(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,             KC_SCLN, KC_QUOT, KC_ENT,  KC_HOME,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,           KC_SLSH, KC_RSFT, KC_UP,	  KC_END,
    KC_LCTL,          KC_LGUI,          KC_SPC,  KC_LALT, KC_SPC,  KC_SPC, 	                           KC_RGUI, KC_LEFT, KC_DOWN, KC_RGHT
  )
	/* LAYER 1  
    [_FN1] = LAYOUT_65_ANSI(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSPC, KC_GRV,
    _______, _______, KC_UP,   _______, _______, _______, _______, KC_MRWD, KC_MPLY, KC_MFFD,          _______, _______, KC_BSLS, KC_DEL,
    _______, KC_LEFT, KC_DOWN, KC_RIGHT,_______, _______, _______, KC_VOLD, KC_MUTE, KC_VOLU,          _______, _______, KC_ENT,  KC_HOME,
    _______, _______, KC_PSTE, KC_COPY, _______, _______, _______, _______, _______, _______,          _______, _______, KC_WH_U, KC_END,
    _______,          _______,          KC_SPC,  _______,          KC_SPC,  _______, 	                 KC_LGUI, KC_WH_L, KC_WH_D, KC_WH_R
  )
  [_FN2] = LAYOUT_65_ANSI(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSPC, KC_GRV,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,             KC_SCLN, KC_QUOT, KC_ENT,  KC_HOME,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,           KC_SLSH, KC_RSFT, KC_UP,	  KC_END,
    KC_LCTL,          KC_LGUI,          KC_SPC,  KC_LALT, KC_SPC,  MO(_FN1), 	                         KC_RGUI, KC_LEFT, KC_DOWN, KC_RGHT
  )
*/
};
