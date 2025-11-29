#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    YourName
#define PRODUCT         SEED_RP2040_Keyboard
#define DESCRIPTION     Custom keyboard

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 4

/* direct pin mapping */
#define DIRECT_PINS { \
    { GP1 }, \
    { GP2 }, \
    { GP4 }, \
    { GP3 } \
}

/* Rotary encoder pins */
#define ENCODERS_PAD_A { GP28 }
#define ENCODERS_PAD_B { GP29 }
#define ENCODER_RESOLUTION 4

/* OLED */
#define OLED_DISPLAY_128X32
#define I2C_DRIVER I2CD1
#define OLED_SCL_PIN GP7
#define OLED_SDA_PIN GP6

/* RGB LED */
#define RGB_DI_PIN GP26
#define RGBLED_NUM 2
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_SLEEP
#define RGBLIGHT_ANIMATIONS
