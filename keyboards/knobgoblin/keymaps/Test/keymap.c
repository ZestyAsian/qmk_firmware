/* Copyright 2020 MrT1ddl3s
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
#include "macros.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	//Numpad
	[0] = LAYOUT_ortho(
                  KC_NUMLOCK, 	KC_PSLS, 	KC_PAST, KC_PMNS,
                  KC_P7,  	KC_P8,   	KC_P9,   KC_PPLS,
                  KC_P4,  	KC_P5,   	KC_P6,   KC_PPLS,
         KC_MPLY, KC_P1,  	KC_P2,   	KC_P3,   KC_PENT,
         KC_MUTE, KC_P0,  	KC_P0,   	KC_PDOT, KC_PENT
				 ),

	//Microstation macros
	[1] = LAYOUT_ortho(
	          KC_NO, 	MSTOP, 		KC_NO, 	KC_NO,
                  MSISO,  	MSBACK,   	KC_NO,  KC_NO,
                  MSLEFT,  	MSTOP,   	MSRIGHT,KC_NO,
         TEST, 	  KC_NO,  	MSFRONT,   	KC_NO,  KC_ENT,
         KC_MUTE, MSFIT,  	MSFIT,   	KC_NO, 	KC_ENT
				 ),
				 
	[2] = LAYOUT_ortho(
	          KC_B, 	KC_B, 		KC_B, 	KC_B,
                  KC_B,  	KC_B,   	KC_B,   KC_B,
                  KC_B,  	KC_B,   	KC_B,   KC_B,
         TEST, 	  KC_B,  	KC_B,   	KC_B,   KC_B,
         KC_MUTE, KC_B,  	KC_B,   	KC_B, 	KC_B
				 ),
				 
	[3] = LAYOUT_ortho(
	          KC_C, 	KC_C, 		KC_C, 	KC_D,
                  KC_C,  	KC_C,   	KC_C,   KC_D,
                  KC_C,  	KC_C,   	KC_C,   KC_D,
         TEST,    KC_C,  	KC_C,   	KC_C,   KC_D,
         KC_MUTE, KC_C,  	KC_C,   	KC_C, 	KC_D
				 ),

	[4] = LAYOUT_ortho(
	          KC_E, 	KC_E, 		KC_E, 	KC_E,
                  KC_E,  	KC_E,   	KC_E,   KC_E,
                  KC_E,  	KC_E,   	KC_E,   KC_E,
         TEST,    KC_E,  	KC_E,   	KC_E,   KC_E,
         KC_MUTE, KC_E,  	KC_E,   	KC_E, 	KC_E
				 ),			 
};


/* assign keycodes to the encoder rotation */
uint8_t selected_layer = 0;
void encoder_update_user(uint8_t index, bool clockwise) {

			if (index == 1) { /* Bottom encoder */
				if (!clockwise) {
					tap_code(KC_VOLU);
				} else {
					tap_code(KC_VOLD);
				}
			}
			if (index == 0) { /* Top encoder */
				if (clockwise && selected_layer < 4) {
					selected_layer ++;
				} else if (!clockwise && selected_layer > 0) {
					selected_layer --;
				}
				layer_clear();
				layer_on(selected_layer);
			}
}
