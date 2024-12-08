// Copyright (C) 2024 Felix Kästner <mail@felix-kaestner.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ Bspc│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │ Ctrl │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ⎇ │
     * ├─────┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┤
     * │ Ctrl│Alt│ GUI │       Space / Fn1         │ GUI │Alt│ Ctrl│
     * └─────┴───┴─────┴───────────────────────────┴─────┴───┴─────┘
     */
    [0] = LAYOUT_60_ansi_tsangan_split_bs_rshift(
        QK_GESC,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,    KC_6,    KC_7,         KC_8,           KC_9,           KC_0,               KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,    KC_Y,    KC_U,         KC_I,           KC_O,           KC_P,               KC_LBRC, KC_RBRC, KC_BSPC,
        CTL_T(KC_ESC),  LALT_T(KC_A),   LSFT_T(KC_S),   LGUI_T(KC_D),   LCTL_T(KC_F),   KC_G,    KC_H,    RCTL_T(KC_J), RGUI_T(KC_K),   RSFT_T(KC_L),   RALT_T(KC_SCLN),    KC_QUOT,          KC_ENT,
        SC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,    KC_N,    KC_M,         KC_COMM,        KC_DOT,         KC_SLSH,            SC_RSPC, KC_HYPR,
        KC_LCTL,        KC_LALT,        KC_LGUI,                                        LT(1,KC_SPC),                                   KC_RGUI,        KC_RALT,            KC_RCTL
    ),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Lck│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│F13│   │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
     * │     │F14│F15│F16│F17│F18│F19│ ⏮ │ ⏯ │ ⏭ │ 🔇│ 🔉│ 🔊│ Del │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
     * │      │   │   │   │   │   │ ← │ ↓ │ ↑ │ → │Hom│Pg↑│        │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
     * │        │⌘ Z│⌘ X│⌘ C│⌘ V│   │   │   │   │End│Pg↓│      │   │
     * ├─────┬──┴┬──┴──┬┴───┴───┴───┴───┴───┴───┴──┬┴───┴┬───┬─┴───┤
     * │     │   │     │                           │     │   │     │
     * └─────┴───┴─────┴───────────────────────────┴─────┴───┴─────┘
     */
    [1] = LAYOUT_60_ansi_tsangan_split_bs_rshift(
        C(G(KC_Q)), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13, _______,
        _______,    KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_DEL,
        _______,    _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_HOME, KC_PGUP,          _______,
        _______,    G(KC_Z), G(KC_X), G(KC_C), G(KC_V), _______, _______, _______, _______, KC_END,  KC_PGDN, _______, _______,
        _______,    _______, _______,                            _______,                            _______, _______, _______
    ),
};


