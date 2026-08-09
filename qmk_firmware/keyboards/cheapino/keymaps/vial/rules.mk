COMBO_ENABLE = yes
TAP_DANCE_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes
MOUSEKEY_ENABLE = yes
CAPS_WORD_ENABLE = yes
EXTRAKEY_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
QMK_SETTINGS = yes

# Preserve generated defaults when Vial Keymap C Editor rewrites keymap.c.
LDFLAGS += -Wl,-wrap=dynamic_keymap_reset
LDFLAGS += -Wl,-wrap=qmk_settings_reset
LDFLAGS += -Wl,-wrap=get_combo_term
