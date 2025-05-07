#include QMK_KEYBOARD_H
// #include "quantum_keycodes.h" // Include this header to define SAFE_RANGE

#define FKEYS MO(_FKEYS)

#define WORD_L LCTL(KC_LEFT)
#define WORD_R LCTL(KC_RIGHT)

#define EMOJI LGUI(KC_DOT)

#define LINE_L KC_HOME
#define LINE_R KC_END

#define TAB_L LCTL(LGUI(KC_LEFT))
#define TAB_R LCTL(LGUI(KC_RIGHT))

#define DEL_WRD LCTL(KC_BSPC)

#define XBX_IMG LGUI(LALT(KC_PSCR)) // Capture portion of screen
#define XBX_MOV LGUI(LALT(KC_G))    // Capture last 30 seconds

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

// MAC only macros
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

#define CAP_LST LGUI(LSFT(KC_7)) // Capture last screen region
#define CAP_IMG LGUI(LSFT(KC_6)) // Capture portion of screen
#define CAP_MOV LGUI(LSFT(KC_5)) // Capture video of screen

enum layers {
    MAC_BASE,
    _BASE,
    _SYMBOL,
    _FKEYS,
    _ADJUST,
    _NAV,
};

enum keychron_keycodes {
    QWERTY = SAFE_RANGE,
    BACKLIT,
    NAV_SCLN,
    KVM_SWT,
    COPYADDR,
    SYMBOL,
    MD_CODE,
    MEH_ENT,
    LOCK,
};

// // Define MATRIX_ROWS and MATRIX_COLS if not already defined
// #ifndef MATRIX_ROWS
// #    define MATRIX_ROWS 5 // Adjust this value based on your keyboard's matrix
// #endif

// #ifndef MATRIX_COLS
// #    define MATRIX_COLS 14 // Adjust this value based on your keyboard's matrix
// #endif

// // Define LAYOUT_ansi_67 if not already defined
// #ifndef LAYOUT_ansi_67
// #    define LAYOUT_ansi_67(...) {__VA_ARGS__}
// #endif
