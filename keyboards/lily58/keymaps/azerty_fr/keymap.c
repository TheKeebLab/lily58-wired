// AZERTY (French) layout for the lily58, generated from the stock keymap.
// Layer 0 keys stay where they are (the computer's keyboard language decides what they type);
// the other layers type the same characters as the stock keymap. Extra keys:
//   layer 2, key 1: €
// TheKeebLab Lily58, wired (Vial). Same layers as the wireless Lily58 keymap;
// wireless-only keys are left empty.
#include QMK_KEYBOARD_H
#include "tkl_brightness.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC,    KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                   KC_LALT, KC_LGUI, MO(1),   KC_SPC,     KC_ENT,  MO(2),   KC_BSPC, KC_RGUI
    ),
    [1] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, TKL_BRI, _______, _______, _______,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        ALGR(KC_7),  KC_SLSH, ALGR(KC_0),   ALGR(KC_3), KC_RBRC,  S(KC_QUOT),                      KC_LBRC, KC_1, KC_NUHS, KC_5, KC_MINS, ALGR(KC_2),
        _______, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______,    _______, _______, KC_6, KC_PLUS, ALGR(KC_4), ALGR(KC_EQL), ALGR(KC_6),
                                   _______, _______, _______, _______,    _______, _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, ALGR(KC_E), _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
        ALGR(KC_7),  S(KC_1),    S(KC_2),    S(KC_3),    S(KC_4),    S(KC_5),                         S(KC_6),    S(KC_7),    S(KC_8),    S(KC_9),    S(KC_0),    _______,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,    _______, KC_PPLS, KC_6, KC_EQL,  ALGR(KC_5), ALGR(KC_MINS), ALGR(KC_8),
                                   _______, _______, _______, _______,    _______, _______, _______, _______
    ),
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return is_keyboard_master() ? rotation : OLED_ROTATION_180;
}
#endif
