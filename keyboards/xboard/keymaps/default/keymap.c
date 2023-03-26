#include "quantum.h"

#define BASE 0
#define FN   1

// menu key is KC_APP

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
    [BASE] = LAYOUT_tkl_ansi(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, MO(FN),  KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [FN] = LAYOUT_tkl_ansi(
        KC_TRNS,              KC_TRNS,    RGB_MODE_KNIGHT,    RGB_MODE_REVERSE,    RGB_MODE_FORWARD,    RGB_VAD,    RGB_VAI,    KC_MEDIA_PREV_TRACK,    KC_MEDIA_PLAY_PAUSE,    KC_MEDIA_NEXT_TRACK,    KC_AUDIO_MUTE,   KC_AUDIO_VOL_DOWN,  KC_AUDIO_VOL_UP,    KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS,              KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,         KC_TRNS,            KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS,              KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,         KC_TRNS,            KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS,              KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,                             KC_TRNS,
        KC_TRNS,              KC_TRNS,    KC_TRNS,            KC_TRNS,             KC_TRNS,             KC_TRNS,              KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,                             KC_TRNS,                     KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,                                             KC_TRNS,                                                           KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,                                                 KC_TRNS, KC_TRNS, KC_TRNS
    )
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0,    NO_LED,     1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14,   15 },
  {   16,       17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29,     30,     31,   32 },
  {   33,       34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44,     45,     46,     47,     48,   49 },
  {   50,       51,     52,     53,     54,     55,     56,     57,     58,     59,     60,     61, NO_LED,     62, NO_LED, NO_LED, NO_LED },
  {   63,       64,     65,     66,     67,     68,     69,     70,     71,     72,     73, NO_LED, NO_LED,     74, NO_LED,     75, NO_LED },
  {   76,       77,     78, NO_LED, NO_LED, NO_LED,     79, NO_LED, NO_LED, NO_LED,     80,     81,     82,     83,     84,     85,   86 }
}, {
  // LED Index to Physical Position
  {0,  0},           {26,  0}, {39,  0}, {52,  0}, {65,  0}, {78,  0}, {91,  0}, {104,  0}, {117,  0}, {130, 0}, {143,  0}, {156,  0}, {169,  0}, {182,  0}, {195,  0}, {208,  0},
  {0, 12}, {13, 12}, {26, 12}, {39, 12}, {52, 12}, {65, 12}, {78, 12}, {91, 12}, {104, 12}, {117, 12}, {130, 0}, {143, 12}, {156, 12}, {169, 12}, {182, 12}, {195, 12}, {208, 12},
  {0, 24}, {13, 24}, {26, 24}, {39, 24}, {52, 24}, {65, 24}, {78, 24}, {91, 24}, {104, 24}, {117, 24}, {130, 0}, {143, 24}, {156, 24}, {169, 24}, {182, 24}, {195, 24}, {208, 24},
  {0, 36}, {13, 36}, {26, 36}, {39, 36}, {52, 36}, {65, 36}, {78, 36}, {91, 36}, {104, 36}, {117, 36}, {130, 0}, {143, 36},            {169, 36},
  {0, 48}, {13, 48}, {26, 48}, {39, 48}, {52, 48}, {65, 48}, {78, 48}, {91, 48}, {104, 48}, {117, 48}, {130, 0},                       {169, 48},            {195, 48},
  {0, 60}, {13, 60}, {26, 60},                               {78, 60},                                 {130, 0}, {143, 60}, {156, 60}, {169, 60}, {182, 60}, {195, 60}, {208, 60}
}, {
  // LED Index to Flag
  0xff,       0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,       0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,             0xff,       0xff,
  0xff, 0xff, 0xff,                   0xff,                   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
} };

const is31_led __flash g_is31_leds[RGB_MATRIX_LED_COUNT] = {
    //row 1
    {0,  CS3_SW1,  CS2_SW1,  CS1_SW1},
    {0,  CS3_SW3,  CS2_SW3,  CS1_SW3},
    {0,  CS3_SW4,  CS2_SW4,  CS1_SW4},
    {0,  CS3_SW5,  CS2_SW5,  CS1_SW5},
    {0,  CS3_SW6,  CS2_SW6,  CS1_SW6},
    {0,  CS3_SW7,  CS2_SW7,  CS1_SW7},
    {0,  CS3_SW8,  CS2_SW8,  CS1_SW8},
    {0,  CS3_SW9,  CS2_SW9,  CS1_SW9},

    //row 2
    {0,  CS6_SW1,  CS5_SW1,  CS4_SW1},
    {0,  CS6_SW2,  CS5_SW2,  CS4_SW2},
    {0,  CS6_SW3,  CS5_SW3,  CS4_SW3},
    {0,  CS6_SW4,  CS5_SW4,  CS4_SW4},
    {0,  CS6_SW5,  CS5_SW5,  CS4_SW5},
    {0,  CS6_SW6,  CS5_SW6,  CS4_SW6},
    {0,  CS6_SW7,  CS5_SW7,  CS4_SW7},
    {0,  CS6_SW8,  CS5_SW8,  CS4_SW8},
    {0,  CS6_SW9,  CS5_SW9,  CS4_SW9},

    //row 3
    {0,  CS9_SW1,  CS8_SW1,  CS7_SW1},
    {0,  CS9_SW2,  CS8_SW2,  CS7_SW2},
    {0,  CS9_SW3,  CS8_SW3,  CS7_SW3},
    {0,  CS9_SW4,  CS8_SW4,  CS7_SW4},
    {0,  CS9_SW5,  CS8_SW5,  CS7_SW5},
    {0,  CS9_SW6,  CS8_SW6,  CS7_SW6},
    {0,  CS9_SW7,  CS8_SW7,  CS7_SW7},
    {0,  CS9_SW8,  CS8_SW8,  CS7_SW8},
    {0,  CS9_SW9,  CS8_SW9,  CS7_SW9},

    //row 4
    {0,  CS12_SW1,  CS11_SW1,  CS10_SW1},
    {0,  CS12_SW2,  CS11_SW2,  CS10_SW2},
    {0,  CS12_SW3,  CS11_SW3,  CS10_SW3},
    {0,  CS12_SW4,  CS11_SW4,  CS10_SW4},
    {0,  CS12_SW5,  CS11_SW5,  CS10_SW5},
    {0,  CS12_SW6,  CS11_SW6,  CS10_SW6},
    {0,  CS12_SW7,  CS11_SW7,  CS10_SW7},
    {0,  CS12_SW8,  CS11_SW8,  CS10_SW8},
    {0,  CS12_SW9,  CS11_SW9,  CS10_SW9},

    //row 5
    {0,  CS15_SW1,  CS14_SW1,  CS13_SW1},
    {0,  CS15_SW2,  CS14_SW2,  CS13_SW2},
    {0,  CS15_SW3,  CS14_SW3,  CS13_SW3},
    {0,  CS15_SW4,  CS14_SW4,  CS13_SW4},
    {0,  CS15_SW5,  CS14_SW5,  CS13_SW5},
    {0,  CS15_SW6,  CS14_SW6,  CS13_SW6},
    {0,  CS15_SW7,  CS14_SW7,  CS13_SW7},
    {0,  CS15_SW8,  CS14_SW8,  CS13_SW8},
    {0,  CS15_SW9,  CS14_SW9,  CS13_SW9},

    //row 6
    {0,  CS18_SW1,  CS17_SW1,  CS16_SW1},
    {0,  CS18_SW2,  CS17_SW2,  CS16_SW2},
    {0,  CS18_SW3,  CS17_SW3,  CS16_SW3},
    {0,  CS18_SW7,  CS17_SW7,  CS16_SW7},

    //row 1
    {1,  CS3_SW1,  CS2_SW1,  CS1_SW1},
    {1,  CS3_SW2,  CS2_SW2,  CS1_SW2},
    {1,  CS3_SW3,  CS2_SW3,  CS1_SW3},
    {1,  CS3_SW4,  CS2_SW4,  CS1_SW4},
    {1,  CS3_SW5,  CS2_SW5,  CS1_SW5},
    {1,  CS3_SW6,  CS2_SW6,  CS1_SW6},
    {1,  CS3_SW7,  CS2_SW7,  CS1_SW7},
    {1,  CS3_SW8,  CS2_SW8,  CS1_SW8},

    //row 2
    {1,  CS6_SW1,  CS5_SW1,  CS4_SW1},
    {1,  CS6_SW2,  CS5_SW2,  CS4_SW2},
    {1,  CS6_SW3,  CS5_SW3,  CS4_SW3},
    {1,  CS6_SW4,  CS5_SW4,  CS4_SW4},
    {1,  CS6_SW5,  CS5_SW5,  CS4_SW5},
    {1,  CS6_SW6,  CS5_SW6,  CS4_SW6},
    {1,  CS6_SW7,  CS5_SW7,  CS4_SW7},
    {1,  CS6_SW8,  CS5_SW8,  CS4_SW8},

    //row 3
    {1,  CS9_SW1,  CS8_SW1,  CS7_SW1},
    {1,  CS9_SW2,  CS8_SW2,  CS7_SW2},
    {1,  CS9_SW3,  CS8_SW3,  CS7_SW3},
    {1,  CS9_SW4,  CS8_SW4,  CS7_SW4},
    {1,  CS9_SW5,  CS8_SW5,  CS7_SW5},
    {1,  CS9_SW6,  CS8_SW6,  CS7_SW6},
    {1,  CS9_SW7,  CS8_SW7,  CS7_SW7},
    {1,  CS9_SW8,  CS8_SW8,  CS7_SW8},

    //row 4
    {1,  CS12_SW1,  CS11_SW1,  CS10_SW1},
    {1,  CS12_SW2,  CS11_SW2,  CS10_SW2},
    {1,  CS12_SW3,  CS11_SW3,  CS10_SW3},
    {1,  CS12_SW5,  CS11_SW5,  CS10_SW5},

    //row 5
    {1,  CS15_SW1,  CS14_SW1,  CS13_SW1},
    {1,  CS15_SW2,  CS14_SW2,  CS13_SW2},
    {1,  CS15_SW5,  CS14_SW5,  CS13_SW5},
    {1,  CS15_SW7,  CS14_SW7,  CS13_SW7},

    //row 6
    {1,  CS18_SW2,  CS17_SW2,  CS16_SW2},
    {1,  CS18_SW3,  CS17_SW3,  CS16_SW3},
    {1,  CS18_SW4,  CS17_SW4,  CS16_SW4},
    {1,  CS18_SW5,  CS17_SW5,  CS16_SW5},
    {1,  CS18_SW6,  CS17_SW6,  CS16_SW6},
    {1,  CS18_SW7,  CS17_SW7,  CS16_SW7},
    {1,  CS18_SW8,  CS17_SW8,  CS16_SW8}

};
