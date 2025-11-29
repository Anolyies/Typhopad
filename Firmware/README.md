**Firmware**
----------------------

Here is both QMK and KMK,

Do I know if either work?
No, I'm planning to test when I get the hackpad built!



Thank You Chet Gippiti for the code!

---------------------------------------
**How to Setup**
---------------------------------------
Prerequistes:
VSCODE

1. Install the “C/C++” extension for code navigation and IntelliSense.

2A. Clone or download QMK firmware: git clone https://github.com/qmk/qmk_firmware.git

2B. Add Firmware files inside | qmk_firmware/keyboards/seed_rp2040_dip/

4. Open VSCode Terminal (Ctrl + ~)

5. Navigate to the QMK firmware folder: cd qmk_firmware

6. Compile your keyboard: qmk compile -kb seed_rp2040_dip -km default | .uf2 file is generated in .build/

7. Hold BOOTSEL on the RP2040 DIP and plug in USB.

8. Drag the compiled .uf2 file from .build/ into the RPI-RP2 drive.

9. Board will reboot automatically.

10. Congrats

**Thank You Chet Gippiti**
----------------------------------------
**KMK**

I don't really know
