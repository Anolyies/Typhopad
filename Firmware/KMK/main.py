from kmk.kmk_keyboard import KMKKeyboard
from kmk.keys import KC
from kmk.modules.rotary_encoder import RotaryEncoder
from kmk.extensions.rgb import RGB
from kmk.extensions.oled import OLED

keyboard = KMKKeyboard()

# Switch pins
keyboard.col_pins = (board.GP1, board.GP2, board.GP4, board.GP3)
keyboard.row_pins = ()

# Keymap
keyboard.keymap = [
    [KC.A, KC.B, KC.C, KC.D]
]

# Rotary encoder
encoder = RotaryEncoder(pin_a=board.GP28, pin_b=board.GP29, pin_button=board.GP0)
keyboard.modules.append(encoder)

# OLED
oled_ext = OLED(sda=board.GP6, scl=board.GP7, width=128, height=32)
keyboard.extensions.append(oled_ext)

# RGB LEDs
rgb_ext = RGB(pin=board.GP26, num=2)
keyboard.extensions.append(rgb_ext)

if __name__ == '__main__':
    keyboard.go()
