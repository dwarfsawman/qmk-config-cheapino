// Copyright 2026 dwarfsawman
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Preserve the UID of the firmware that shipped on this keyboard so the
// pre-migration .vil backup remains restorable.
#define VIAL_KEYBOARD_UID {0x79, 0xED, 0x40, 0xBB, 0x09, 0x8B, 0xC1, 0x9E}
#define VIAL_UNLOCK_COMBO_ROWS {4, 0}
#define VIAL_UNLOCK_COMBO_COLS {10, 4}

#define DYNAMIC_KEYMAP_LAYER_COUNT 5
// Keep Tap Dance and Combo slot counts equal as a compatibility workaround
// for vial-keymap-c-editor f142b1b, which swaps these two counts while parsing.
#define VIAL_TAP_DANCE_ENTRIES 32
#define VIAL_COMBO_ENTRIES 32
#define VIAL_KEY_OVERRIDE_ENTRIES 4

// ZMK hold-tap values from the Totem configuration.
#undef TAPPING_TERM
#define TAPPING_TERM 280
#define QUICK_TAP_TERM 175
#define PERMISSIVE_HOLD

#define COMBO_TERM 30

// QMK Settings defaults captured from the connected keyboard after tuning
// the Mouse Keys controls in Vial.
#define MOUSEKEY_DELAY 10
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_MOVE_DELTA 7
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_TIME_TO_MAX 24
#define MOUSEKEY_WHEEL_DELAY 10
#define MOUSEKEY_WHEEL_INTERVAL 80
#define MOUSEKEY_WHEEL_MAX_SPEED 4
#define MOUSEKEY_WHEEL_TIME_TO_MAX 33

// A newly pressed direction starts again at the initial speed instead of
// inheriting the acceleration of an overlapping Mouse Key.
#define MOUSEKEY_OVERLAP_RESET
#define MOUSEKEY_OVERLAP_MOVE_DELTA 0

// This Cheapino2's onboard WS2812 expects green before red.
#undef WS2812_BYTE_ORDER
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_GRB

// Keep the layer indicator at the dimmest non-off level.
#undef RGBLIGHT_DEFAULT_HUE
#undef RGBLIGHT_DEFAULT_SAT
#undef RGBLIGHT_DEFAULT_VAL
#define RGBLIGHT_DEFAULT_HUE 128
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_VAL 1
#define RGBLIGHT_LIMIT_VAL 1
