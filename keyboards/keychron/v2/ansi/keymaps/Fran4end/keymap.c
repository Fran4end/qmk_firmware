#include QMK_KEYBOARD_H
#include "common.h"
#include "keymap_italian.h"

/*
#include "quantum.h" // Include for get_mods function
#include "action.h"
#include "send_string.h" // Include the header for SEND_STRING
*/

// enum layers{
//     MAC_BASE,
//     WIN_BASE,
//     _FN1,
//     _FN2,
//     _FN3
// };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    * MAC_BASE
    */
    [MAC_BASE] = LAYOUT_ansi_67(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,     KC_EQL,     KC_BSPC,          KC_INS,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,     KC_RBRC,    KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,                 KC_ENT,           KC_HOME,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,     KC_RSFT,             KC_UP,
        KC_LCTL, KC_LCMD,  FKEYS,                              KC_SPC,                              KC_LOPT,  SYMBOL,      MEH_ENT,    KC_LEFT, KC_DOWN, KC_RGHT),

    /*
    * BASE
    ,---------------------------------------------------------------------------------------------------------.
    | ESC  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |   =  | BKsp | | INS |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------| | HOME|
    | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [   |  ]   |  \   | | DEL |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+ +-----|
    | LOCK |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |    Enter    |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+       |
    | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Shift|      |  Up  |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+      +------|       |
    | Ctrl |  GUI |  FN  |                   Space                 | Alt  |SYMBOL| MEH  | Left | Down | Right |
    `---------------------------------------------------------------------------------------------------------'
    */
    [_BASE] = LAYOUT_ansi_67(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_INS,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_HOME,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    NAV_SCLN, KC_QUOT,            KC_ENT,           KC_DEL,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT,           KC_UP,
        KC_LCTL, KC_LGUI,  FKEYS,                              KC_SPC,                              KC_LALT,  SYMBOL,   MEH_ENT,  KC_LEFT, KC_DOWN, KC_RGHT),

    /*
    * SYMBOL
    * Every symbol and number required for coding and every-day use.
    ,---------------------------------------------------------------------------------------------------------.
    |  `   |   1  |   2  |   3  |   €  |   5  |   °  |   §  |   8  |   9  |   0  |   -  |   =  | BKsp | | INS |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------| | HOME|
    |  ~   |   Q  |   W  |   è  |   é  |   T  |   Y  |   ù  |   ì  |   ò  |   P  |  [   |  ]   |  \   | | DEL |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+ +-----|
    | LOCK |   à  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |    Enter    |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+       |
    | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Shift|      |  Up  |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+      +------|       |
    | Ctrl |  GUI |  FN  |                   Space                 | Alt  |SYMBOL| MEH  | Left | Down | Right |
    `---------------------------------------------------------------------------------------------------------'
    */
    [_SYMBOL] = LAYOUT_ansi_67(
        KC_GRV,  _______,  _______,  _______, IT_EURO, _______, IT_DEG,  IT_SECT, _______, _______, _______,  _______,  _______,  _______,          _______,
        KC_TILD, _______,  _______,  IT_EGRV, _______, _______, _______, IT_UGRV, IT_IGRV, IT_OGRV, _______,  _______,  _______,  _______,          _______,
        _______, IT_AGRV,  _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,          _______,
        _______,           _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,           _______,
        _______, _______,  _______,                             _______,                            _______,  _______,  _______,  _______, _______, _______),

    /*
    * FNKEYS
    * Function keys, mouse emulation and less commonly used special keys.
    ,---------------------------------------------------------------------------------------------------------.
    | ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | BKsp | | INS |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------| | HOME|
    | Tab  |   Q  |   W  |   E  |   R  |   T  |  AC0 |  BT1 | MS_U |  BT1 |  AC1 |  [   |  ]   |  \   | | DEL |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+ +-----|
    | Ctrl |   A  |   S  |   D  |   F  |   G  | WH_D | MS_L | MS_D | MS_R | WH_U |  '   |    Enter    |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+       |
    | Shift|   Z  |   X  |  F13 |  F14 |  F15 |  F16 |   M  |   ,  |   .  |   /  | Shift|      |  Up  |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+      +------|       |
    | Ctrl |  GUI |  FN  |                   Space                 | Alt  |SYMBOL| MEH  | Left | Down | Right |
    `---------------------------------------------------------------------------------------------------------'
    */
    [_FKEYS] = LAYOUT_ansi_67(
        _______, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,   _______,          _______,
        _______, _______,  _______,  _______, _______, _______, KC_ACL0, KC_BTN1, KC_MS_U, KC_BTN2, KC_ACL1,  _______,  _______,  _______,          _______,
        KC_LCTL, _______,  _______,  _______, _______, _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U,  _______,            _______,          _______,
        _______,           _______,  KC_F13,  KC_F14,  KC_F15,  KC_F16,  _______, _______, _______, _______,  _______,  _______,           _______,
        _______, _______,  _______,                             _______,                            _______,  _______,  _______,  _______, _______, _______),

    /*
    * NAV
    * loosely vim-based cursor and document navigation keys.
    * Accessed by holding semicolon.
    * Acts as cmd for any unbound keys.
    ,---------------------------------------------------------------------------------------------------------.
    | ESC  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |   =  | BKsp | | INS |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------| | HOME|
    | Tab  |   Q  |   W  | PV_W |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [   |  ]   |  \   | | DEL |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+ +-----|
    | LOCK |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |    Enter    |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+       |
    | Shift|   Z  |  CUT | COPY | PASTE| NX_W |   N  |   M  |   ,  |   .  |   /  | Shift|      |  Up  |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+      +------|       |
    | Ctrl |  GUI |  FN  |                   Space                 | Alt  |SYMBOL| MEH  | Left | Down | Right |
    `---------------------------------------------------------------------------------------------------------'
    */
    [_NAV] = LAYOUT_ansi_67(
        _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,          KC_END,
        _______, _______,  _______,  WORD_R,  _______, _______, _______, _______, _______, LINE_R,  LINE_L,   _______,  _______,  KC_HOME,          KC_PGUP,
        _______, _______,  _______,  _______, _______, _______, _______, _______, _______, KC_INS,  KC_HOME,  KC_PGUP,            _______,          KC_PGDN,
        _______,           _______,  CUT,     COPY,    PASTE,   WORD_L,  _______, _______, KC_DEL,  KC_END,   KC_PGDN,  _______,           _______,
        _______, _______,  _______,                             _______,                            _______,  _______,  _______,  _______, _______, _______),

    /*
    * ADJUST
    * Keyboard level commands.
    * Accessed via FKEY+SYMBOL keys.
    TODO: fix comment scheme
    ,---------------------------------------------------------------------------------------------------------.
    | ESC  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   -  |   =  | BKsp | | INS |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------| | HOME|
    | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [   |  ]   |  \   | | DEL |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+ +-----|
    | LOCK |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  '   |    Enter    |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+------+------+       |
    | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Shift|      |  Up  |       |
    |------+------+------+------+------+------+------+------+------+------+------+------+      +------|       |
    | Ctrl |  GUI |  FN  |                   Emoji                 | Alt  |SYMBOL| MEH  | Left | Down | Right |
    `---------------------------------------------------------------------------------------------------------'
    */
    [_ADJUST] = LAYOUT_ansi_67(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_TASK, KC_FLXP, RM_VALD, RM_VALU, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          _______,
        RM_TOGG, RM_NEXT,  RM_VALU,  RM_HUEU, RM_SATU, RM_SPDU, _______, _______, _______, CAP_LST, CAP_IMG,  CAP_MOV,  _______,  _______,          _______,
        LOCK,    RM_PREV,  RM_VALD,  RM_HUED, RM_SATD, RM_SPDD, _______, _______, _______, KVM_SWT, COPYADDR, KC_MPLY,            _______,          _______,
        QK_BOOT,           _______,  XBX_IMG, XBX_MOV, _______, _______, NK_TOGG, _______, _______, _______,  _______,  _______,           _______,
        _______, _______,  _______,                             EMOJI,                              _______,  _______,  _______,  _______, _______, _______),
};

// track the time of the last key input.
static uint16_t last_key_time;

// track the last keycode pressed.
static uint16_t last_key_code;

// track the state of MEH over multiple key presses.
// 0 - not activated
// 1 - pressed but waiting activation
// 2 - activated MEH combo
static int meh_activated;

// track the state of NAV_SCLN
// 0 - not activated
// 1 - pressed (waiting to decide on semicolon or nav)
// 2 - consumed (upgraded to semicolon or used in nav layer)
// 3 - consumed (as ctrl-tab rotation)
// 4 - consumed (as cmd)
static int semicolon_nav_activated;

// keep track of the current kvm target (to play a different sound on switch).
static int kvm_target;

// keep track of the kvm target which is in game mode.
static int game_target = -1;

#define IS_GAME kvm_target == game_target

// whether a symbol was typed after symbol layer switch
// 0  - not consumed
// 1  - consumed by standard case
// 2+ - consumed by special case
static int symbol_consumed;

// track the state of KC_LSFT
// 0 - not activated
// 1 - down, not consumed
// 2+ - consumed by special case
static int lsft_state;

// track the state of KC_RSFT
// 0 - not activated
// 1 - down, not consumed
// 2 - down, consumed
static int rsft_state;

// track the state of backtick surround
// 0 - not activated
// 1 - started (cursor placed between ``)
// 2 - consumed (success or revert)
static int backtick_surround_state;

static bool last_was_number;

static bool last_was_alpha;

// number of vim movement keys pressed in a row.
static int vim_movement;

static bool vim_insert;

/*
! sound not working
// sounds
float song_kvm_setting[][2] = SONG(S__NOTE(_C5),S__NOTE(_C6),S__NOTE(_C7));

float song_kvm_0[][2] = SONG(S__NOTE(_C5),S__NOTE(_E5));
float song_kvm_1[][2] = SONG(S__NOTE(_E5),S__NOTE(_C5));

float song_game_0[][2] = SONG(S__NOTE(_C6),S__NOTE(_C5));
float song_game_1[][2] = SONG(S__NOTE(_C5),S__NOTE(_C6));
*/
void backtick_commit(void){
    switch (backtick_surround_state)
    {
        case 1:
            tap_code16(KC_RGHT);
            tap_code16(KC_BSPC);
            tap_code16(KC_BSPC);
            break;

        case 2:
            tap_code16(KC_RGHT);
            break;
    }

    backtick_surround_state = 0;
}

void backtick_begin(void){
    if (backtick_surround_state != 0)
        return;

    // undo early register in lsft state 1.
    unregister_code(KC_LSFT);

    // begin backtick surround sequence.
    tap_code16(KC_GRV);
    tap_code16(KC_GRV);
    tap_code16(KC_LEFT);
    backtick_surround_state = 1;
}

bool process_backtick_surround(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed)
        return true;

    // activation is handled in shift handling methods.
    if (backtick_surround_state == 0)
        return true;

    switch (keycode) {
        case KC_LSFT:
        case KC_RSFT:
        case KC_LCTL:
            // don't consume symbol from keys that aren't meaningful.
            break;

        case KC_SPC:
        case KC_ESC:
        case KC_COMM:
            if (get_mods() == 0)
                // exit via various commit keys
                backtick_commit();
            break;

        case KC_BSPC:
            // only handle if not consumed (we might be backspacing within a surround).
            if (backtick_surround_state == 1)
            {
                backtick_commit();
                return false;
            }

            break;

        case KC_ENT:
        case MEH_ENT:
            // exit via enter
            backtick_commit();
            meh_activated = 3;
            return false;

        default:
            // or consume on any other key
            backtick_surround_state = 2;
            break;
    }

    return true;
}

bool process_symbol_specials(uint16_t keycode, keyrecord_t *record) {
    // handle actual layer toggle.
    if (keycode == SYMBOL)
    {
        if (record->event.pressed)
        {
            symbol_consumed = 0;
            layer_on(_SYMBOL);
        }
        else
        {
            layer_off(_SYMBOL);

            if (symbol_consumed == 3)
            {
                unregister_code(KC_PGUP);
                unregister_code(KC_LALT);
            }
        }

        return true;
    }

    if (!IS_LAYER_ON(_SYMBOL))
        return true;

    // handle special case keys, where a certain key is pressed immediately following
    // symbol layer. this allows special space/backspace when intention is clear
    // and we are not attempting to just backspace or punctuate while typing symbols.
    if (record->event.pressed)
    {
        if (symbol_consumed != 1)
        {
            switch (keycode) {
                case KC_SPC:
                    register_code(KC_PGUP);
                    symbol_consumed = 3;
                    return false;
                case KC_BSPC:
                    register_code(KC_LALT);
                    symbol_consumed = 3;
            }
        }

        // When typing numbers, we usually want comma/period instead of angled brackets.
        if (last_was_number)
        {
            switch (keycode) {
                case KC_LT:
                    tap_code16(KC_COMM);
                    return false;
                case KC_GT:
                    tap_code16(KC_DOT);
                    return false;
            }
        }

        if (symbol_consumed == 1)
        {
            switch (keycode) {
                case MEH_ENT:
                    if (last_key_code == KC_LT)
                    {
                        register_code(KC_LALT);
                        tap_code16(KC_RGHT);
                        unregister_code(KC_LALT);
                        return false;
                    }
                    break;
            }
        }

        // only upgrade from initial state. 2 is capturing
        if (symbol_consumed == 0)
            symbol_consumed = 1;
    }
    else
    {
        switch (keycode) {
            case KC_SPC:
                if (symbol_consumed == 3)
                {
                    unregister_code(KC_PGUP);
                    unregister_code(KC_LALT);
                }
                return true;
        }
    }

    return true;
}

bool process_meh(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MEH_ENT:
            if (record->event.pressed) {
                if (last_key_code != KC_LGUI && (timer_elapsed(last_key_time) < 200 || get_highest_layer(layer_state) != _BASE))
                {
                    register_code(KC_ENT);
                    meh_activated = 3;
                }
                else
                {
                    meh_activated = 1;
                }
            }
            else
            {
                switch (meh_activated)
                {
                    case 1:
                        if (timer_elapsed(last_key_time) < 200)
                            tap_code16(KC_ENT);
                        break;

                    case 2:
                        unregister_code(KC_LCTL);
                        unregister_code(KC_LSFT);
                        unregister_code(KC_LALT);
                        break;

                    case 3:
                        unregister_code(KC_ENT);
                        break;
                }

                meh_activated = 0;
            }
            return true;

        default:
            switch (meh_activated)
            {
                case 1:
                case 3:
                    unregister_code(KC_ENT);
                    register_code(KC_LCTL);
                    register_code(KC_LSFT);
                    register_code(KC_LALT);
                    meh_activated = 2;
                    break;
            }

            break;
    }

    return true;
}

void unregister_nav_scln_down_state(void) {
    unregister_code16(KC_SCLN);

    switch (semicolon_nav_activated)
    {
        case 3:
            unregister_code16(KC_LSFT);
            break;
        case 4:
            unregister_code16(KC_LGUI);
            break;
    }

    semicolon_nav_activated = 0;
}

bool process_nav_scln(uint16_t keycode, keyrecord_t *record) {
    // handle toggle logic (and potential semicolon output).
    switch (keycode) {
        case NAV_SCLN:
            if (record->event.pressed) {
                // timer case here is just to give more immediacy to semicolons when typing at EOL.
                // set low enough to not impede intended navigation
                if (get_mods() & MOD_BIT(KC_LSFT) || (get_mods() == 0 && timer_elapsed(last_key_time) < 100 && last_key_code != KC_ESC))
                {
                    register_code16(KC_SCLN);
                    semicolon_nav_activated = 2;
                    return true;
                }
                else
                {
                    semicolon_nav_activated = 1;
                    layer_on(_NAV);
                }
                return false;
            }
            else
            {
                switch (semicolon_nav_activated)
                {
                    case 1:
                        if (timer_elapsed(last_key_time) < 250)
                        {
                            // clears a potential ctrl modifier from CTRL_ESC.
                            // sequence of events is SCLN down - wait 500ms - CTRL_ESC down - SCLN up - CTRL_ESC up
                            clear_mods();
                            tap_code16(KC_SCLN);
                        }
                        break;
                }

                unregister_nav_scln_down_state();
                semicolon_nav_activated = 0;
                layer_off(_NAV);
                return false;
            }
    }


    if (!record->event.pressed || semicolon_nav_activated < 1)
        return true;

    switch (keycode) {
        case KC_UP:
        case KC_DOWN:
        case KC_PGUP:
        case KC_PGDN:
        case WORD_L:
        case WORD_R:
        case LINE_L:
        case LINE_R:
        case TAB_L:
        case TAB_R:
            unregister_nav_scln_down_state();
            semicolon_nav_activated = 2;

            // actions for these are handled by the keys/macros temselves.
            return true;

        case KC_LEFT:
        case KC_RGHT:
            if (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_LGUI))
            {
                if (semicolon_nav_activated != 3)
                    unregister_nav_scln_down_state();

                if (keycode == KC_LEFT)
                    register_code16(KC_LSFT);
                else
                    unregister_code16(KC_LSFT);

                tap_code16(KC_TAB);
                semicolon_nav_activated = 3;
                return false;
            }
            else
            {
                unregister_nav_scln_down_state();
                semicolon_nav_activated = 2;
                return true;
            }

        case KC_LGUI:
        case KC_LSFT:
            return true;

        case KC_ENT:
            // enter only cmd enters if the first thing.
            // this is to allow things like selecting options from lists (using up/down).
            if (semicolon_nav_activated > 1)
                return true;

            break;

        case KC_ESC:
        case KC_SPC:
            // this handles cases like SCLN_NAV -> KC_ESC rapidly after a previous character.
            if (semicolon_nav_activated == 1 && timer_elapsed(last_key_time) < 500)
            {
                tap_code16(KC_SCLN);
                semicolon_nav_activated = 2;
                return true;
            }

            break;
    }

    // if the nav layer doesn't have a specific action for the pressed key, we add a cmd modifier.
    // this feels pretty good but may be a bit noisy/undefined.
    if (semicolon_nav_activated != 4 && semicolon_nav_activated != 2)
    {
        unregister_nav_scln_down_state();

        register_code16(KC_LGUI);
        semicolon_nav_activated = 4;
    }

    return true;
}

bool process_left_shift(uint16_t keycode, keyrecord_t *record) {
    if (keycode == KC_LSFT)
    {
        if (record->event.pressed)
        {
            if (get_mods() & MOD_BIT(KC_RSFT) || (last_key_code == KC_LSFT && timer_elapsed(last_key_time) < 250))
            {
                register_code(KC_LSFT);
                lsft_state = 2;
                return false;
            }

            // TODO: next line may break: block this because it handles weird on iOS (left shift release also releases right shift MAKING_this-happen)
            register_code(KC_LSFT);
            lsft_state = 1;

            if (rsft_state == 1)
                backtick_begin();

            return false;
        }
        else
        {
            lsft_state = 0;
        }
    }
    else if (keycode != KC_RSFT && record->event.pressed && lsft_state == 1)
    {
        register_code(KC_LSFT);
        lsft_state = 2;
    }

    return true;
}

bool process_right_shift(uint16_t keycode, keyrecord_t *record) {
    if (keycode == KC_RSFT)
    {
        if (record->event.pressed)
        {
            if (lsft_state == 1)
            {
                backtick_begin();
                rsft_state = 2;
                return false;
            }

            // UNDERSCORES_WHEN_LEFT_SHIFTING
            // or dashes when typing quickly
            if (lsft_state == 2 || timer_elapsed(last_key_time) < 250)
            {
                register_code(KC_MINS);
                rsft_state = 3;
                return false;
            }

            rsft_state = 1;

            // block this because it handles weird on iOS (right shift release also releases left shift MAKING_this-happen)
            return false;
        }
        else
        {
            if (rsft_state == 3)
                unregister_code(KC_MINS);
            else if (rsft_state == 1 && backtick_surround_state != 1 && (last_key_code == KC_RSFT && timer_elapsed(last_key_time) < 250))
                tap_code16(KC_MINS);

            rsft_state = 0;
        }
    }
    else if (keycode != KC_LSFT && record->event.pressed && rsft_state == 1)
    {
        register_code(KC_RSFT);
        rsft_state = 2;
    }

    return true;
}

bool process_macros(uint16_t keycode, keyrecord_t *record) {
    if (!record->event.pressed)
        return true;

    switch (keycode) {
        case COPYADDR:
            SEND_STRING(SS_LGUI("lc"));
            tap_code16(KC_ESC);
            tap_code16(KC_ESC);
            return false;

        case LOCK:
            // lock windows
            SEND_STRING(SS_LGUI(SS_TAP(X_L)));
            // lock macOS and turn off screen
            SEND_STRING(SS_LCTL(SS_LGUI(SS_TAP(X_Q))));
            return false;

        case MD_CODE:
            SEND_STRING("```csharp" SS_LSFT(SS_TAP(X_ENT)) SS_LSFT(SS_TAP(X_ENT)) "```");
            SEND_STRING(SS_TAP(X_UP));
            return false;

        case KVM_SWT:
            if (get_mods() & MOD_BIT(KC_LCTL))
            {
                SEND_STRING(SS_LCTL(SS_TAP(X_F12)) "t");
                // PLAY_SONG(song_kvm_setting);
                return false;
            }

            tap_code16(KC_SCROLL_LOCK);
            tap_code16(KC_SCROLL_LOCK);

            // track the current target device to give audible feedback
            kvm_target = (kvm_target + 1) % 2;

            // ! sound not working
            // if (kvm_target == 1)
            //     PLAY_SONG(song_kvm_1);
            // else
            //     PLAY_SONG(song_kvm_0);
            // !

            // set_game_mode(IS_GAME, false);
            return false;

        case KC_BSPC:
            // ctrl-backspace maps to opt-backspace
            if (get_mods() == MOD_BIT(KC_LCTL))
            {
                uint8_t mod_state = get_mods();
                clear_mods();

                register_code(KC_LALT);
                tap_code16(KC_BSPC);
                unregister_code(KC_LALT);

                set_mods(mod_state);
                return false;
            }
            break;
    }

    return true;
}

void update_last_was_number(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed)
    {
        last_was_number = false;
        last_was_alpha = false;

        // handle vim movement tracking
        switch (keycode) {
            case KC_H:
            case KC_J:
            case KC_K:
            case KC_L:
                last_was_alpha = true;
                vim_movement++;
                return;
        }

        vim_movement = 0;

        switch (keycode) {
            case KC_I:
            case KC_O:
            case KC_A:
                vim_insert = true;
                break;
            case KC_ESC:
                vim_insert = false;
                break;
        }

        switch (keycode) {
            case KC_1:
            case KC_2:
            case KC_3:
            case KC_4:
            case KC_5:
            case KC_6:
            case KC_7:
            case KC_8:
            case KC_9:
            case KC_0:
                last_was_number = true;
                break;
            // not really "alpha" keys but counted as such for usages.
            case NAV_SCLN:
            case KC_SCLN:
                last_was_alpha = true;
                break;
            default:
                // todo: handle/allow shift as a modifier
                last_was_alpha = get_mods() == 0 && (keycode >= KC_A && keycode < KC_0);
                break;
        }
    }
}

bool process_all_custom(uint16_t keycode, keyrecord_t *record) {
    if (!process_symbol_specials(keycode, record)) return false;

    // in game mode, all excess processing is skipped (mainly to avoid unwanted macro / helper triggers).
    if (!(IS_GAME))
    {
        // delay shift down presses until next key.
        if (!process_left_shift(keycode, record)) return false;
        if (!process_right_shift(keycode, record)) return false;

        if (!process_nav_scln(keycode, record)) return false;

        if (!process_backtick_surround(keycode, record)) return false;

        if (!process_meh(keycode, record)) return false;

        if (!process_macros(keycode, record)) return false;
    }

    return true;
}

// For debounce and edge case purposes, track the last key timing, key code,
// and whether it was a numeric character or not.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    bool retval = process_all_custom(keycode, record);

    if (record->event.pressed)
    {
        last_key_time = timer_read();
        last_key_code = keycode;
    }

    update_last_was_number(keycode, record);
    return retval;
}

// When holding both SYMBOL and FKEYS, the ADJUST layer will be accessible.
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _SYMBOL, _FKEYS, _ADJUST);
}
