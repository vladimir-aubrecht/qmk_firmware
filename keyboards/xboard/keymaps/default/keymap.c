#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
     * │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│ │PSc│Scr│Pse│
     * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ │Del│End│PgD│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│ │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘
     */
    [0] = LAYOUT_tkl_ansi(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,

        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT
    )
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0, NO_LED, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 },

  {   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 },
  {   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 },
  {   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, NO_LED, 12 },
  {   0, NO_LED, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, NO_LED, 12, NO_LED, 13 },
  {   0, 1, 2, NO_LED, NO_LED, NO_LED, 6, NO_LED, NO_LED, NO_LED, 10, 11, 12, 13, 14, 15, 16 },
}, {
  // LED Index to Physical Position
  { 188,  16 }, { 187,  48 }
}, {
  // LED Index to Flag
  1, 4
} };


const is31_led __flash g_is31_leds[RGB_MATRIX_LED_COUNT] = {
    {0,  CS3_SW1,  CS2_SW1,  CS1_SW1},
    {0,  CS3_SW2,  CS2_SW2,  CS1_SW2},
    {0,  CS3_SW3,  CS2_SW3,  CS1_SW3},
    {0,  CS3_SW4,  CS2_SW4,  CS1_SW4},
    {0,  CS3_SW5,  CS2_SW5,  CS1_SW5},
    {0,  CS3_SW6,  CS2_SW6,  CS1_SW6},
    {0,  CS3_SW7,  CS2_SW7,  CS1_SW7},
    {0,  CS3_SW8,  CS2_SW8,  CS1_SW8},
    {0,  CS3_SW9,  CS2_SW9,  CS1_SW9},

    {0,  CS6_SW1,  CS5_SW1,  CS4_SW1},
    {0,  CS6_SW2,  CS5_SW2,  CS4_SW2},
    {0,  CS6_SW3,  CS5_SW3,  CS4_SW3},
    {0,  CS6_SW4,  CS5_SW4,  CS4_SW4},
    {0,  CS6_SW5,  CS5_SW5,  CS4_SW5},
    {0,  CS6_SW6,  CS5_SW6,  CS4_SW6},
    {0,  CS6_SW7,  CS5_SW7,  CS4_SW7},
    {0,  CS6_SW8,  CS5_SW8,  CS4_SW8},
    // {0,  CS6_SW9,  CS5_SW9,  CS4_SW9},

    // {0,  CS9_SW1,  CS8_SW1,  CS7_SW1},
    // {0,  CS9_SW2,  CS8_SW2,  CS7_SW2},
    // {0,  CS9_SW3,  CS8_SW3,  CS7_SW3},
    // {0,  CS9_SW4,  CS8_SW4,  CS7_SW4},
    // {0,  CS9_SW5,  CS8_SW5,  CS7_SW5},
    // {0,  CS9_SW6,  CS8_SW6,  CS7_SW6},
    // {0,  CS9_SW7,  CS8_SW7,  CS7_SW7},
    // {0,  CS9_SW8,  CS8_SW8,  CS7_SW8},
    // {0,  CS9_SW9,  CS8_SW9,  CS7_SW9},

    // {0,  CS12_SW1,  CS11_SW1,  CS10_SW1},
    // {0,  CS12_SW2,  CS11_SW2,  CS10_SW2},
    // {0,  CS12_SW3,  CS11_SW3,  CS10_SW3},
    // {0,  CS12_SW4,  CS11_SW4,  CS10_SW4},
    // {0,  CS12_SW5,  CS11_SW5,  CS10_SW5},
    // {0,  CS12_SW6,  CS11_SW6,  CS10_SW6},
    // {0,  CS12_SW7,  CS11_SW7,  CS10_SW7},
    // {0,  CS12_SW8,  CS11_SW8,  CS10_SW8},
    // {0,  CS12_SW9,  CS11_SW9,  CS10_SW9},

    // {0,  CS15_SW1,  CS14_SW1,  CS13_SW1},
    // {0,  CS15_SW2,  CS14_SW2,  CS13_SW2},
    // {0,  CS15_SW3,  CS14_SW3,  CS13_SW3},
    // {0,  CS15_SW4,  CS14_SW4,  CS13_SW4},
    // {0,  CS15_SW5,  CS14_SW5,  CS13_SW5},
    // {0,  CS15_SW6,  CS14_SW6,  CS13_SW6},
    // {0,  CS15_SW7,  CS14_SW7,  CS13_SW7},
    // {0,  CS15_SW8,  CS14_SW8,  CS13_SW8},
    // {0,  CS15_SW9,  CS14_SW9,  CS13_SW9},

    // {0,  CS18_SW1,  CS17_SW1,  CS16_SW1},
    // {0,  CS18_SW2,  CS17_SW2,  CS16_SW2},
    // {0,  CS18_SW3,  CS17_SW3,  CS16_SW3},
    // {0,  CS18_SW4,  CS17_SW4,  CS16_SW4},
    // {0,  CS18_SW5,  CS17_SW5,  CS16_SW5},
    // {0,  CS18_SW6,  CS17_SW6,  CS16_SW6},
    // {0,  CS18_SW7,  CS17_SW7,  CS16_SW7},
    // {0,  CS18_SW8,  CS17_SW8,  CS16_SW8},
    // {0,  CS18_SW9,  CS17_SW9,  CS16_SW9},



    // {1,  CS3_SW1,  CS2_SW1,  CS1_SW1},
    // {1,  CS3_SW2,  CS2_SW2,  CS1_SW2},
    // {1,  CS3_SW3,  CS2_SW3,  CS1_SW3},
    // {1,  CS3_SW4,  CS2_SW4,  CS1_SW4},
    // {1,  CS3_SW5,  CS2_SW5,  CS1_SW5},
    // {1,  CS3_SW6,  CS2_SW6,  CS1_SW6},
    // {1,  CS3_SW7,  CS2_SW7,  CS1_SW7},
    // {1,  CS3_SW8,  CS2_SW8,  CS1_SW8},

    // {1,  CS6_SW1,  CS5_SW1,  CS4_SW1},
    // {1,  CS6_SW2,  CS5_SW2,  CS4_SW2},
    // {1,  CS6_SW3,  CS5_SW3,  CS4_SW3},
    // {1,  CS6_SW4,  CS5_SW4,  CS4_SW4},
    // {1,  CS6_SW5,  CS5_SW5,  CS4_SW5},
    // {1,  CS6_SW6,  CS5_SW6,  CS4_SW6},
    // {1,  CS6_SW7,  CS5_SW7,  CS4_SW7},
    // {1,  CS6_SW8,  CS5_SW8,  CS4_SW8},

    // {1,  CS9_SW1,  CS8_SW1,  CS7_SW1},
    // {1,  CS9_SW2,  CS8_SW2,  CS7_SW2},
    // {1,  CS9_SW3,  CS8_SW3,  CS7_SW3},
    // {1,  CS9_SW4,  CS8_SW4,  CS7_SW4},
    // {1,  CS9_SW5,  CS8_SW5,  CS7_SW5},
    // {1,  CS9_SW6,  CS8_SW6,  CS7_SW6},
    // {1,  CS9_SW7,  CS8_SW7,  CS7_SW7},
    // {1,  CS9_SW8,  CS8_SW8,  CS7_SW8},

    // {1,  CS12_SW1,  CS11_SW1,  CS10_SW1},
    // {1,  CS12_SW2,  CS11_SW2,  CS10_SW2},
    // {1,  CS12_SW3,  CS11_SW3,  CS10_SW3},
    // {1,  CS12_SW4,  CS11_SW4,  CS10_SW4},
    // {1,  CS12_SW5,  CS11_SW5,  CS10_SW5},
    // {1,  CS12_SW6,  CS11_SW6,  CS10_SW6},
    // {1,  CS12_SW7,  CS11_SW7,  CS10_SW7},
    // {1,  CS12_SW8,  CS11_SW8,  CS10_SW8},

    // {1,  CS15_SW1,  CS14_SW1,  CS13_SW1},
    // {1,  CS15_SW2,  CS14_SW2,  CS13_SW2},
    // {1,  CS15_SW3,  CS14_SW3,  CS13_SW3},
    // {1,  CS15_SW4,  CS14_SW4,  CS13_SW4},
    // {1,  CS15_SW5,  CS14_SW5,  CS13_SW5},
    // {1,  CS15_SW6,  CS14_SW6,  CS13_SW6},
    // {1,  CS15_SW7,  CS14_SW7,  CS13_SW7},
    // {1,  CS15_SW8,  CS14_SW8,  CS13_SW8},

    // {1,  CS18_SW1,  CS17_SW1,  CS16_SW1},
    // {1,  CS18_SW2,  CS17_SW2,  CS16_SW2},
    // {1,  CS18_SW3,  CS17_SW3,  CS16_SW3},
    // {1,  CS18_SW4,  CS17_SW4,  CS16_SW4},
    // {1,  CS18_SW5,  CS17_SW5,  CS16_SW5},
    // {1,  CS18_SW6,  CS17_SW6,  CS16_SW6},
    // {1,  CS18_SW7,  CS17_SW7,  CS16_SW7},
    // {1,  CS18_SW8,  CS17_SW8,  CS16_SW8},

};
