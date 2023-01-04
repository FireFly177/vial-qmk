#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6878
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    DuyNguyen
#define PRODUCT         atreus64
#define DESCRIPTION     DuyNguyen_atreus64
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2
#define VIA_EEPROM_CUSTOM_CONFIG_SIZE 2048
#define MIDI_ADVANCED

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26, GP22 }
#define MATRIX_COL_PINS { GP21, GP20, GP19, GP18, GP17, GP16, GP15, GP14, GP13, GP12, GP11, GP10, GP9 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
