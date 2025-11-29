#pragma once

#include "config_common.h"

// ---- USB ----
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Anoily
#define PRODUCT         HackPad

// ---- Direct Pins ----
#define DIRECT_PINS { \
    { GP1, GP2, GP4, GP3 } \
}

// ---- Encoder ----
#define ENCODERS_PAD_A { GP28 }
#define ENCODERS_PAD_B { GP29 }
#define ENCODER_BUTTON { GP0 }

// ---- OLED ----
#define OLED_DISPLAY_ADDRESS 0x3C
#define I2C1_SDA_PIN GP26
#define I2C1_SCL_PIN GP27

// ---- RGB ----
#define RGB_DI_PIN GP6
#define RGBLED_NUM 2
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
