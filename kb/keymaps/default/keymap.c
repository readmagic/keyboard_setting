#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    LAYOUT_60_ansi(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP,KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, TO(1), KC_LEFT, KC_DOWN, KC_RGHT),

    LAYOUT_60_ansi(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_UP, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, TO(0), KC_LEFT, KC_DOWN, KC_RGHT)};

enum combo_events {
	TILDE,
    EXCLAIM,
    AT,
    HASH,
    DOLLAR,
    PERCENT,
    CIRCUMFLEX,
	AMPERSAND,
	ASTERISK,
	LEFT_PAREN,
	RIGHT_PAREN,
	UNDERSCORE,
	PLUS,
	LEFT_CURLY_BRACE,
	RIGHT_CURLY_BRACE,
	PIPE,
	COLON,
	DOUBLE_QUOTE,
	LEFT_ANGLE_BRACKET,
	RIGHT_ANGLE_BRACKET,
	QUESTION };

const uint16_t PROGMEM tilde_combo[]               = {KC_UP, KC_ESC, COMBO_END};
const uint16_t PROGMEM exclaim_combo[]             = {KC_UP, KC_1, COMBO_END};
const uint16_t PROGMEM at_combo[]                  = {KC_UP, KC_2, COMBO_END};
const uint16_t PROGMEM hash_combo[]                = {KC_UP, KC_3, COMBO_END};
const uint16_t PROGMEM dollar_combo[]              = {KC_UP, KC_4, COMBO_END};
const uint16_t PROGMEM percent_combo[]             = {KC_UP, KC_5, COMBO_END};
const uint16_t PROGMEM circumflex_combo[]          = {KC_UP, KC_6, COMBO_END};
const uint16_t PROGMEM ampersand_combo[]           = {KC_UP, KC_7, COMBO_END};
const uint16_t PROGMEM asterisk_combo[]            = {KC_UP, KC_8, COMBO_END};
const uint16_t PROGMEM left_paren_combo[]          = {KC_UP, KC_9, COMBO_END};
const uint16_t PROGMEM right_paren_combo[]         = {KC_UP, KC_0, COMBO_END};
const uint16_t PROGMEM underscore_combo[]          = {KC_UP, KC_MINS, COMBO_END};
const uint16_t PROGMEM plus_combo[]                = {KC_UP, KC_EQL, COMBO_END};
const uint16_t PROGMEM left_curly_combo[]          = {KC_UP, KC_LBRC, COMBO_END};
const uint16_t PROGMEM right_curly_combo[]         = {KC_UP, KC_RBRC, COMBO_END};
const uint16_t PROGMEM pipe_combo[]                = {KC_UP, KC_BSLS, COMBO_END};
const uint16_t PROGMEM colon_combo[]               = {KC_UP, KC_SCLN, COMBO_END};
const uint16_t PROGMEM double_quote_combo[]        = {KC_UP, KC_QUOT, COMBO_END};
const uint16_t PROGMEM left_angle_bracket_combo[]  = {KC_UP, KC_COMM, COMBO_END};
const uint16_t PROGMEM right_angle_bracket_combo[] = {KC_UP, KC_DOT, COMBO_END};
const uint16_t PROGMEM question_combo[]            = {KC_UP, KC_SLSH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [TILDE] = COMBO_ACTION(tilde_combo),
	[EXCLAIM] = COMBO_ACTION(exclaim_combo),
	[AT] = COMBO_ACTION(at_combo),
	[HASH] = COMBO_ACTION(hash_combo),
	[DOLLAR] = COMBO_ACTION(dollar_combo),
	[PERCENT] = COMBO_ACTION(percent_combo),
	[CIRCUMFLEX] = COMBO_ACTION(circumflex_combo),
	[AMPERSAND] = COMBO_ACTION(ampersand_combo),
	[ASTERISK] = COMBO_ACTION(asterisk_combo),
	[LEFT_PAREN] = COMBO_ACTION(left_paren_combo),
    [RIGHT_PAREN] = COMBO_ACTION(right_paren_combo),
    [UNDERSCORE] = COMBO_ACTION(underscore_combo),
	[PLUS] = COMBO_ACTION(plus_combo),
	[LEFT_CURLY_BRACE] = COMBO_ACTION(left_curly_combo),
	[RIGHT_CURLY_BRACE] = COMBO_ACTION(right_curly_combo),
	[PIPE] = COMBO_ACTION(pipe_combo),
	[COLON] = COMBO_ACTION(colon_combo),
	[DOUBLE_QUOTE] = COMBO_ACTION(double_quote_combo),
	[LEFT_ANGLE_BRACKET] = COMBO_ACTION(left_angle_bracket_combo),
	[RIGHT_ANGLE_BRACKET] = COMBO_ACTION(right_angle_bracket_combo),
	[QUESTION] = COMBO_ACTION(question_combo)
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case TILDE:
            if (pressed) {
                tap_code16(KC_TILDE);
            }
            break;
        case EXCLAIM:
            if (pressed) {
                tap_code16(KC_EXCLAIM);
            }
            break;
        case AT:
            if (pressed) {
                tap_code16(KC_AT);
            }
            break;
        case HASH:
            if (pressed) {
                tap_code16(KC_HASH);
            }
            break;
        case DOLLAR:
            if (pressed) {
                tap_code16(KC_DOLLAR);
            }
            break;
        case PERCENT:
            if (pressed) {
                tap_code16(KC_PERCENT);
            }
            break;
        case CIRCUMFLEX:
            if (pressed) {
                tap_code16(KC_CIRCUMFLEX);
            }
            break;
        case AMPERSAND:
            if (pressed) {
                tap_code16(KC_AMPERSAND);
            }
            break;
        case ASTERISK:
            if (pressed) {
                tap_code16(KC_ASTERISK);
            }
            break;

        case LEFT_PAREN:
            if (pressed) {
                tap_code16(KC_LEFT_PAREN);
            }
            break;
        case RIGHT_PAREN:
            if (pressed) {
                tap_code16(KC_RIGHT_PAREN);
            }
            break;
        case UNDERSCORE:
            if (pressed) {
                tap_code16(KC_UNDERSCORE);
            }
            break;
        case PLUS:
            if (pressed) {
                tap_code16(KC_PLUS);
            }
            break;
        case LEFT_CURLY_BRACE:
            if (pressed) {
                tap_code16(KC_LEFT_CURLY_BRACE);
            }
            break;
        case RIGHT_CURLY_BRACE:
            if (pressed) {
                tap_code16(KC_RIGHT_CURLY_BRACE);
            }
            break;
        case PIPE:
            if (pressed) {
                tap_code16(KC_PIPE);
            }
            break;
        case COLON:
            if (pressed) {
                tap_code16(KC_COLON);
            }
            break;
        case DOUBLE_QUOTE:
            if (pressed) {
                tap_code16(KC_DOUBLE_QUOTE);
            }
            break;
        case LEFT_ANGLE_BRACKET:
            if (pressed) {
                tap_code16(KC_LEFT_ANGLE_BRACKET);
            }
            break;
        case RIGHT_ANGLE_BRACKET:
            if (pressed) {
                tap_code16(KC_RIGHT_ANGLE_BRACKET);
            }
            break;
        case QUESTION:
            if (pressed) {
                tap_code16(KC_QUESTION);
            }
            break;
    }
}

void matrix_init_user(void) {}

void matrix_scan_user(void) {}
