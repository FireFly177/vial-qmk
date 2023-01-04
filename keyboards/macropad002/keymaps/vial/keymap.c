#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │TG1│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
    [0] = LAYOUT_numpad_5x4(
        KC_P0, 		KC_P1, 				KC_P4, 			KC_P7,
        KC_PDOT,   	KC_P2,   			KC_P5,			KC_P8,
        KC_LEFT,   	KC_P3,   			KC_P6,   		KC_P9,
        KC_DOWN,   	KC_UP,   			LCTL(KC_A),		LCTL(KC_X),
        KC_RIGHT,  	LT(1, KC_CAPS),		LCTL(KC_V),   	LCTL(KC_C)
    ),

    /*
     * ┌───┬───┬───┬───┐
     * │TG1│ / │ * │ - │
     * ┌───┬───┬───┐───┤
     * │Hom│ ↑ │PgU│   │
     * ├───┼───┼───┤ + │
     * │ ← │   │ → │   │
     * ├───┼───┼───┤───┤
     * │End│ ↓ │PgD│   │
     * ├───┴───┼───┤Ent│
     * │Insert │Del│   │
     * └───────┴───┘───┘
     */
    [1] = LAYOUT_numpad_5x4(
        KC_F1, 		KC_F4, 		KC_F7, 		KC_F10,
        KC_F2,   	KC_F5,   	KC_F8,		KC_F11,
        KC_F3,   	KC_F6,   	KC_F9,   	KC_F12,
        KC_NO,   	KC_NO,   	KC_NO,		KC_NO,
        KC_NO,   	KC_NO,		KC_NO,   	QK_BOOT
    )
};
