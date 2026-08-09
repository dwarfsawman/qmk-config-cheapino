// Generated in the format used by Vial Keymap C Editor
// (https://vial-keymap-c-editor.pages.dev)

#include QMK_KEYBOARD_H

#ifdef QMK_SETTINGS
#    include "qmk_settings.h"
#endif

/* USER INCLUDE BEGIN */
#include "mousekey.h"

enum cheapino_layers {
    L_BASE,
    L_LOWER,
    L_UPPER,
    L_ADJUST,
    L_MOUSE,
};

enum cheapino_custom_keycodes {
    CK_IME = QK_KB_0,
    CK_WIN_SHIFT,
    CK_WIN_CTRL,
    CK_ALT_F4,
    CK_COPY,
    CK_PASTE,
    CK_CUT,
};

/*
 * vial-keymap-c-editor still emits qs.tapping, while current Vial-QMK calls
 * that field tapping_v2. Translate its legacy option bits and keep Chordal
 * Hold enabled if the editor adds VIAL_DEFAULT_TAPPING to config.h.
 */
#ifdef QMK_SETTINGS
#    ifdef VIAL_DEFAULT_TAPPING
enum { vial_editor_legacy_tapping = VIAL_DEFAULT_TAPPING };
#        undef VIAL_DEFAULT_TAPPING
#        define VIAL_DEFAULT_TAPPING                                                       \
            ((vial_editor_legacy_tapping & 0x01) |                                        \
             ((vial_editor_legacy_tapping & 0x04) >> 1) |                                 \
             ((vial_editor_legacy_tapping & 0x08) >> 1) | (1 << 3))
#    endif
#    define tapping tapping_v2
#endif
/* USER INCLUDE END */

/* GENERATED CODE BEGIN */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_3(
                   KC_B,            KC_L,            KC_D,            KC_W,
                   KC_Z,         KC_QUOT,            KC_F,            KC_O,
                   KC_U,            KC_J,    LCTL_T(KC_N),    LSFT_T(KC_R),
           LALT_T(KC_T),    LGUI_T(KC_S),            KC_G,            KC_Y,
           RGUI_T(KC_H),    RALT_T(KC_A),    RSFT_T(KC_E),     LT(4, KC_I),
                   KC_Q,            KC_X,            KC_M,            KC_C,
                   KC_V,            KC_K,            KC_P,          KC_DOT,
                KC_MINS,         KC_COMM,         KC_BSPC,    LT(2, KC_SPC),
                KC_DEL,   LT(3, KC_BTN2),   LT(1, KC_BTN1),    LT(1, KC_ENT)
    ),
    [1] = LAYOUT_split_3x5_3(
                KC_MINS,            KC_7,            KC_8,            KC_9,
                KC_PLUS,         KC_PERC,           KC_UP,         KC_LPRN,
                KC_RPRN,          KC_DOT,            KC_0,            KC_4,
                  KC_5,            KC_6,          KC_EQL,         KC_LEFT,
                KC_RGUI,  RALT_T(KC_RGHT),  RSFT_T(KC_LBRC),  RCTL_T(KC_RBRC),
                KC_SLSH,            KC_1,            KC_2,            KC_3,
                KC_ASTR,         KC_HOME,         KC_PGDN,          KC_DOT,
                 KC_END,            KC_X,         KC_TRNS,         KC_TRNS,
               KC_TRNS,         KC_TRNS,         KC_TRNS,           KC_NO
    ),
    [2] = LAYOUT_split_3x5_3(
                KC_TILD,          KC_DOT,         KC_ASTR,         KC_AMPR,
                  KC_AT,         KC_PERC,         KC_LBRC,         KC_LPRN,
                KC_RPRN,         KC_RBRC,           TD(0),           TD(1),
       LALT_T(KC_MINS),           TD(2),         KC_SLSH,         KC_EXLM,
       RGUI_T(KC_COMM),  RALT_T(KC_LBRC),  RSFT_T(KC_RBRC),  RCTL_T(KC_SCLN),
                 KC_GRV,         KC_QUOT,         KC_DQUO,         KC_PLUS,
                KC_BSLS,         KC_HASH,         KC_CIRC,         KC_COLN,
                 KC_EQL,          KC_DLR,           KC_NO,         KC_TRNS,
               KC_TRNS,         KC_TRNS,         KC_TRNS,         KC_TRNS
    ),
    [3] = LAYOUT_split_3x5_3(
                  KC_F1,           KC_F2,           KC_F3,           KC_F4,
                  KC_F5,           KC_F6,           KC_F7,           KC_F8,
                  KC_F9,          KC_F10,         KC_LALT,           KC_NO,
                KC_BTN2,         KC_BTN1,           KC_NO,         KC_MS_L,
                KC_MS_D,         KC_MS_R,           KC_NO,          KC_F11,
                KC_VOLD,         KC_VOLU,           KC_NO,           KC_NO,
                  KC_NO,         KC_WH_L,         KC_WH_D,         KC_WH_U,
                KC_WH_R,           KC_NO,           KC_NO,           KC_NO,
                  KC_NO,           KC_NO,           KC_NO,           KC_NO
    ),
    [4] = LAYOUT_split_3x5_3(
                KC_LGUI,         KC_BTN2,         KC_MS_U,         KC_BTN1,
                  KC_NO,           KC_NO,         KC_HOME,           KC_UP,
                 KC_END,           KC_NO,         KC_LCTL,         KC_MS_L,
                KC_MS_D,         KC_MS_R,         KC_WH_R,           KC_NO,
               KC_LEFT,         KC_DOWN,         KC_RGHT,           KC_NO,
                KC_VOLD,         KC_VOLU,         KC_WH_L,         KC_WH_D,
                KC_WH_U,         KC_WH_L,         KC_WH_D,         KC_WH_U,
                KC_WH_R,           KC_NO,         KC_LSFT,         KC_LALT,
                KC_LCTL,         KC_BTN3,         KC_BTN1,         KC_BTN2
    )
};

// Tap Dance definitions. These three entries reproduce shifted-symbol
// hold-taps that cannot be encoded by QMK's 8-bit Mod-Tap tap key.
#define TAP_DANCE_ENTRY(onTap, onHold, onDoubleTap, onTapHold, tappingTerm) \
    ((vial_tap_dance_entry_t){.on_tap = onTap, .on_hold = onHold,          \
                              .on_double_tap = onDoubleTap,                 \
                              .on_tap_hold = onTapHold,                     \
                              .custom_tapping_term = tappingTerm})
#if VIAL_TAP_DANCE_ENTRIES > 0
const vial_tap_dance_entry_t default_tap_dance_entries[] = {
    TAP_DANCE_ENTRY(KC_LT, KC_LCTL, KC_NO, KC_NO, 280),
    TAP_DANCE_ENTRY(KC_PIPE, KC_LSFT, KC_NO, KC_NO, 280),
    TAP_DANCE_ENTRY(KC_GT, KC_LGUI, KC_NO, KC_NO, 280)
};
#endif

// Combo definitions.
#define COMBO_ENTRY(k1, k2, k3, k4, result) \
    ((vial_combo_entry_t){.input = {k1, k2, k3, k4}, .output = result})
#if VIAL_COMBO_ENTRIES > 0
const vial_combo_entry_t PROGMEM default_combo_entries[] = {
    COMBO_ENTRY(KC_L, KC_D, KC_NO, KC_NO, KC_TAB),
    COMBO_ENTRY(KC_7, KC_8, KC_NO, KC_NO, KC_SPC),
    COMBO_ENTRY(KC_X, KC_M, KC_NO, KC_NO, KC_DEL),
    COMBO_ENTRY(KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_BSPC),
    COMBO_ENTRY(LGUI_T(KC_S), LALT_T(KC_T), KC_NO, KC_NO, CK_IME),
    COMBO_ENTRY(KC_G, LGUI_T(KC_S), KC_Y, KC_NO, CW_TOGG),
    COMBO_ENTRY(KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, CK_ALT_F4),
    COMBO_ENTRY(LGUI_T(KC_S), LSFT_T(KC_R), KC_NO, KC_NO, KC_APP),
    COMBO_ENTRY(KC_C, KC_M, KC_NO, KC_NO, KC_F13)
};
#endif

// Macro buffer: 16 empty Vial macros.
const uint8_t PROGMEM default_macro_buffer[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Key Override definitions for the Totem mod-morph punctuation keys.
#if VIAL_KEY_OVERRIDE_ENTRIES > 0
const vial_key_override_entry_t default_key_override_entries[] = {
    {
        KC_QUOT,
        KC_UNDS,
        0x0001,
        MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
        0,
        MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
        vial_ko_option_activation_trigger_down |
            vial_ko_option_activation_required_mod_down |
            vial_ko_option_activation_negative_mod_up | vial_ko_enabled
    },
    {
        KC_DOT,
        KC_COLN,
        0x0003,
        MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
        0,
        MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
        vial_ko_option_activation_trigger_down |
            vial_ko_option_activation_required_mod_down |
            vial_ko_option_activation_negative_mod_up | vial_ko_enabled
    },
    {
        KC_MINS,
        KC_DQUO,
        0x0001,
        MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
        0,
        MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
        vial_ko_option_activation_trigger_down |
            vial_ko_option_activation_required_mod_down |
            vial_ko_option_activation_negative_mod_up | vial_ko_enabled
    },
    {
        KC_COMM,
        KC_SCLN,
        0x0001,
        MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
        0,
        MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT),
        vial_ko_option_activation_trigger_down |
            vial_ko_option_activation_required_mod_down |
            vial_ko_option_activation_negative_mod_up | vial_ko_enabled
    }
};
#endif

// Initialize Vial dynamic items.
void __real_dynamic_keymap_reset(void);
void __wrap_dynamic_keymap_reset(void) {
    __real_dynamic_keymap_reset();

#if VIAL_TAP_DANCE_ENTRIES > 0
    for (size_t i = 0;
         i < sizeof(default_tap_dance_entries) / sizeof(default_tap_dance_entries[0]);
         ++i) {
        dynamic_keymap_set_tap_dance(i, &default_tap_dance_entries[i]);
    }
#endif
#if VIAL_COMBO_ENTRIES > 0
    for (size_t i = 0;
         i < sizeof(default_combo_entries) / sizeof(default_combo_entries[0]);
         ++i) {
        dynamic_keymap_set_combo(i, &default_combo_entries[i]);
    }
#endif
#if VIAL_KEY_OVERRIDE_ENTRIES > 0
    for (size_t i = 0;
         i < sizeof(default_key_override_entries) / sizeof(default_key_override_entries[0]);
         ++i) {
        dynamic_keymap_set_key_override(i, &default_key_override_entries[i]);
    }
#endif
#ifdef QMK_SETTINGS
    qmk_settings_t qs;
    uint8_t       *p_qs = (uint8_t *)&qs;
    for (size_t i = 0; i < sizeof(qs); ++i) {
        p_qs[i] = dynamic_keymap_get_qmk_settings(i);
    }
#    ifdef VIAL_DEFAULT_TAPPING
    qs.tapping = VIAL_DEFAULT_TAPPING;
#    endif
#    ifdef VIAL_DEFAULT_AUTO_SHIFT
    qs.auto_shift = VIAL_DEFAULT_AUTO_SHIFT;
#    endif
#    ifdef DEFAULT_GRAVE_ESC_OVERRIDE
    qs.grave_esc_override = DEFAULT_GRAVE_ESC_OVERRIDE;
#    endif

    for (size_t i = 0; i < sizeof(qs); ++i) {
        dynamic_keymap_set_qmk_settings(i, p_qs[i]);
    }

#    ifdef DEFAULT_KEYMAP_EECONFIG
    keymap_config.raw = DEFAULT_KEYMAP_EECONFIG;
    eeconfig_update_keymap(keymap_config.raw);
#    endif

    qmk_settings_init();
#endif

    uint16_t const macro_buffer_size =
        MIN(sizeof(default_macro_buffer), dynamic_keymap_macro_get_buffer_size());
    dynamic_keymap_macro_set_buffer(0, macro_buffer_size,
                                    (uint8_t *)default_macro_buffer);
}

/* GENERATED CODE END */

/* USER CODE BEGIN */
static bool i_key_is_control;
static bool mouse_layer_was_on;

// One-time migration marker. A newly flashed board can still contain the
// previous firmware's valid Vial EEPROM, which would otherwise hide the
// Totem defaults compiled above. Once migrated, normal Vial edits persist.
#define TOTEM_EEPROM_MIGRATION_MARKER 0x544F5433U

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x5_3(
        'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'R', 'R', 'R'
    );

static uint8_t active_layer(layer_state_t state) {
    return get_highest_layer(state | default_layer_state);
}

static void apply_layer_color(layer_state_t state) {
    uint8_t value = rgblight_get_val();
    if (value > RGBLIGHT_LIMIT_VAL) {
        value = RGBLIGHT_LIMIT_VAL;
    }

    uint8_t red   = 0;
    uint8_t green = 0;
    uint8_t blue  = 0;

    // Use only fully-on or fully-off channels. At the intentionally tiny
    // brightness limit of 5, partial HSV channels collapse visually into
    // their dominant primary color.
    switch (active_layer(state)) {
        case L_LOWER:
            red = green = value; // yellow
            break;
        case L_UPPER:
            red = blue = value; // magenta
            break;
        case L_ADJUST:
            green = value;
            break;
        case L_MOUSE:
            red = value;
            break;
        default:
            green = blue = value; // cyan
            break;
    }

    rgblight_setrgb(red, green, blue);
}

void keyboard_post_init_user(void) {
    if (eeconfig_read_user() != TOTEM_EEPROM_MIGRATION_MARKER) {
        dynamic_keymap_reset();
        eeconfig_update_user(TOTEM_EEPROM_MIGRATION_MARKER);
    }

    if (rgblight_get_val() > RGBLIGHT_LIMIT_VAL) {
        rgblight_sethsv(rgblight_get_hue(), rgblight_get_sat(),
                        RGBLIGHT_LIMIT_VAL);
    }
    apply_layer_color(layer_state);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    bool mouse_layer_is_on = layer_state_cmp(state, L_MOUSE);
    if (mouse_layer_was_on && !mouse_layer_is_on) {
        mousekey_clear();
        mousekey_send();
    }
    mouse_layer_was_on = mouse_layer_is_on;
    apply_layer_color(state);
    return state;
}

bool combo_should_trigger(uint16_t combo_index, combo_t *combo,
                          uint16_t keycode, keyrecord_t *record) {
    (void)combo;
    (void)keycode;
    (void)record;

    uint8_t layer = active_layer(layer_state);
    switch (combo_index) {
        case 0:
        case 2:
        case 4:
        case 7:
            return layer == L_BASE;
        case 1:
            return layer == L_LOWER;
        case 3:
            return layer == L_UPPER;
        case 6:
            return layer == L_MOUSE;
        case 5:
        case 8:
            return true;
        default:
            return true;
    }
}

void __real_qmk_settings_reset(void);
void __wrap_qmk_settings_reset(void) {
    __real_qmk_settings_reset();

    uint16_t value16;
    uint8_t  value8;

    value16 = 30;
    qmk_settings_set(2, &value16, sizeof(value16));   // Combo term
    value16 = 280;
    qmk_settings_set(7, &value16, sizeof(value16));   // Tapping term
    value8 = 1;
    qmk_settings_set(22, &value8, sizeof(value8));    // Permissive Hold
    value8 = 0;
    qmk_settings_set(23, &value8, sizeof(value8));    // Hold On Other Key off
    value16 = 175;
    qmk_settings_set(25, &value16, sizeof(value16));  // Quick Tap
    value8 = 1;
    qmk_settings_set(26, &value8, sizeof(value8));    // Chordal Hold
    value16 = 125;
    qmk_settings_set(27, &value16, sizeof(value16));  // Flow Tap
}

uint16_t __real_get_combo_term(uint16_t combo_index, combo_t *combo);
uint16_t __wrap_get_combo_term(uint16_t combo_index, combo_t *combo) {
    if (combo_index == 7) {
        return 60;
    }
    return __real_get_combo_term(combo_index, combo);
}

static bool modifier_morphs_i_to_control(void) {
    uint8_t mods = get_mods() | get_weak_mods() | get_oneshot_mods();
    uint8_t morph_mods = MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI |
                         MOD_BIT(KC_RSFT);
    return (mods & morph_mods) != 0;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == LT(L_MOUSE, KC_I)) {
        if (record->event.pressed && modifier_morphs_i_to_control()) {
            i_key_is_control = true;
            add_weak_mods(MOD_BIT(KC_LCTL));
            send_keyboard_report();
            return false;
        }
        if (!record->event.pressed && i_key_is_control) {
            i_key_is_control = false;
            del_weak_mods(MOD_BIT(KC_LCTL));
            send_keyboard_report();
            return false;
        }
    }

    if (!record->event.pressed) {
        return true;
    }

    switch (keycode) {
        case CK_IME:
            host_consumer_send(AC_NEXT_KEYBOARD_LAYOUT_SELECT);
            wait_ms(10);
            host_consumer_send(0);
            tap_code16(LALT(KC_GRV));
            return false;
        case CK_WIN_SHIFT:
            set_oneshot_mods(MOD_BIT(KC_LGUI) | MOD_BIT(KC_LSFT));
            return false;
        case CK_WIN_CTRL:
            set_oneshot_mods(MOD_BIT(KC_LGUI) | MOD_BIT(KC_LCTL));
            return false;
        case CK_ALT_F4:
            tap_code16(LALT(KC_F4));
            return false;
        case CK_COPY:
            tap_code16(LCTL(KC_C));
            return false;
        case CK_PASTE:
            tap_code16(LCTL(KC_V));
            return false;
        case CK_CUT:
            tap_code16(LCTL(KC_X));
            return false;
    }

    return true;
}
/* USER CODE END */
