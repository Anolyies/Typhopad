#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = { { KC_A, KC_B, KC_C, KC_D } } // example keys
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    oled_write_ln_P(PSTR("SEED RP2040"), false);
}
#endif
