#include QMK_KEYBOARD_H
#include "midi.h"

extern MidiDevice midi_device;

#define _DEFAULT 0
#define _NAV 1
#define _RESET 2
#define _MIDI 3

//enum midi_keycodes {
//  MIDI_NOTE_ON = 0x90,
//  MIDI_NOTE_OFF = 0x80,
//};

//enum custom_keycodes {
//    MIDI_NOTE_C4 = SAFE_RANGE,
//    MIDI_NOTE_CSHARP4,
//  	MIDI_NOTE_D4,
//    MIDI_NOTE_DSHARP4,
//  	MIDI_NOTE_E4,
//  	MIDI_NOTE_F4,
//    MIDI_NOTE_FSHARP4,
//  	MIDI_NOTE_G4,
//    MIDI_NOTE_GSHARP4,
//  	MIDI_NOTE_A4,
//    MIDI_NOTE_ASHARP4,
//  	MIDI_NOTE_B4,
//  	MIDI_NOTE_C5,
//    MIDI_NOTE_CSHARP5,
//  	MIDI_NOTE_D5,
//    MIDI_NOTE_DSHARP5,
//  	MIDI_NOTE_E5,
//  	MIDI_NOTE_F5,
//    MIDI_NOTE_FSHARP5,
//  	MIDI_NOTE_G5,
//    MIDI_NOTE_GSHARP5,
//  	MIDI_NOTE_A5,
//    MIDI_NOTE_ASHARP5,
//  	MIDI_NOTE_B5,
//  	MIDI_OCTAVE_UP,
//  	MIDI_OCTAVE_DOWN,
//};

//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//  	if (record->event.pressed) {
//  	  midi_send_cc(&midi_device, 0, 80, 127);
//  	} else {
//    	midi_send_cc(&midi_device, 0, 80, 0);
//  	}
// 	 return true;
//}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [_DEFAULT] = LAYOUT(
		KC_GRV,		KC_1,		KC_2, 		KC_3, 			KC_4, 			KC_5, 						KC_6, 		KC_7, 		KC_8, 		KC_9, 		KC_0, 		KC_ESC, 
		KC_TAB, 	KC_Q, 		KC_W, 		KC_E, 			KC_R, 			KC_T, 		LT(1, KC_ESC),	KC_Y, 		KC_U, 		KC_I, 		KC_O, 		KC_P, 		KC_BSLS, 
		KC_CAPS, 	KC_A, 		KC_S, 		KC_D, 			KC_F, 			KC_G, 		KC_ENT, 		KC_H, 		KC_J, 		KC_K, 		KC_L, 		KC_SCLN, 	KC_QUOT, 
		KC_LSFT,	KC_Z, 		KC_X, 		KC_C, 			KC_V, 			KC_B, 		KC_DEL, 		KC_N, 		KC_M, 		KC_COMM, 	KC_DOT, 	KC_SLSH, 	KC_LSFT, 
		KC_LCTL, 	KC_LGUI,	KC_LALT,	LT(2, KC_SPC), 	LT(1, KC_SPC), 	KC_SPC, 	KC_BSPC, 		KC_SPC, 	TG(3), 		KC_MINUS, 	KC_EQUAL, 	KC_LBRC, 	KC_RBRC),

	[_NAV] = LAYOUT(
		KC_F1,	 	KC_F2,	 	KC_F3, 		KC_F4, 		KC_F5, 		KC_F6, 					KC_F7, 		KC_F8, 		KC_F9, 		KC_F10, 	KC_F11, 	KC_F12, 
		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_UP,		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 
		KC_TRNS, 	KC_TRNS, 	KC_LEFT, 	KC_DOWN,	KC_RGHT, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 
		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS,	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 
		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS),

	[_RESET] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(0), QK_BOOT, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

//	[_MIDI] = LAYOUT(
//		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 								KC_TRNS, 			KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				TG(3), 					KC_TRNS, 
//		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				KC_TRNS, 
//		MIDI_OCTAVE_UP, 	MIDI_OCTAVE_DOWN, 	KC_TRNS, 		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			MIDI_NOTE_CSHARP5, 	KC_TRNS, 			KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				KC_TRNS,
//		MIDI_NOTE_CSHARP4, 	MIDI_NOTE_DSHARP4, 	KC_TRNS, 		MIDI_NOTE_FSHARP4, 	MIDI_NOTE_GSHARP4, 	MIDI_NOTE_ASHARP4, 	MIDI_NOTE_B4, 		MIDI_NOTE_DSHARP5, 	KC_TRNS, 				MIDI_NOTE_FSHARP5, 		MIDI_NOTE_GSHARP5, 		MIDI_NOTE_ASHARP5, 		KC_TRNS, 
//		MIDI_NOTE_C4, 		MIDI_NOTE_D4, 		MIDI_NOTE_E4, 	MIDI_NOTE_F4, 		MIDI_NOTE_G4, 		MIDI_NOTE_A4, 		MIDI_NOTE_C5, 		MIDI_NOTE_D5, 		MIDI_NOTE_E5, 			MIDI_NOTE_F5, 			MIDI_NOTE_G5, 			MIDI_NOTE_A5, 			MIDI_NOTE_B5), 
	
	[_MIDI] = LAYOUT(
		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 								KC_TRNS, 			KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				TG(3), 					KC_TRNS, 
		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				KC_TRNS, 
		MI_OCTD, 			MI_OCTU, 			KC_TRNS, 		KC_TRNS, 			KC_TRNS, 			KC_TRNS, 			MI_Cs_1, 			KC_TRNS, 			KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				KC_TRNS, 				KC_TRNS,
		MI_Cs_1, 			MI_Ds_1, 			KC_TRNS, 		MI_Fs_1, 			MI_Gs_1, 			MI_As_1, 			MI_B_1, 			MI_Ds_2, 			KC_TRNS, 				MI_Fs_2, 				MI_Gs_2, 				MI_As_2, 				KC_TRNS, 
		MI_C_1, 			MI_D_1, 			MI_E_1, 		MI_F_1, 			MI_G_1, 			MI_A_1, 			MI_C_2, 			MI_D_2, 			MI_E_2, 				MI_F_2, 				MI_G_2, 				MI_A_2, 				MI_B_2), 

};
