# Typhopad
A Starter Hackpad Project | By Anolyies

<img src="https://i.imgur.com/0Eew5cb.png" width="400" /> <img src="https://i.imgur.com/TLbMUMx.png" width="400" />

**A Short Rant**
I used Solidworks rather than Fusion360, the assembly part of the case was really annoying, I didn't know what to do, and the tutorials online weren't great, but I got it done alright, I think.

The Schematic / PCB:
-------------------------------
<img src="https://i.imgur.com/yaeeQWo.png" width="400" />   <img src="https://i.imgur.com/xvw0Niq.png" width="400" />
*Schematic / Left*                                              | *PCB / Right*

--------------------------------------------------
I wasn't too sure on how to make the PCB. It's my first time using KICad and making a PCB schematic. The routing and pcb itself looks pretty bad, it doesn't use a switch matrix, it's directly wired. I'm not too sure what that means but yeah. I tried to follow the beginner friendly tutorial as close as possible, then added the OLED display and RotaryEncoder, but kind of winged it, as there was no tutorial on how to do those ones. I don't know if this PCB will work, but I hope it will. Lastly, the OLED display area, I'll just directly solder the pins on the OLED display into the holes rather than using a JConnector.

The Assembly:
----------------------------------
<img src="https://i.imgur.com/OyPbxBV.png" />

---------------------------------------------
This design follows the tutorial really pretty closely with only a few differences, but I think that's fine for a semi-beginner.

I add the PCB with wiring,soldering, and etc... Into the bottom case. 4x M3x16mm screws go through the bottom of the cas, then I use 4x M3x5mx4mm heatset inserts to secure the screws. The add the keycaps and boom done.

Firmware:
----------------------------------
Firmare was not really made by me, it was made primarilly by Chet Gippiti (ChatGPT). I also dont know if it works, so when I get my own board, I'll test and see if it works and fix it if it doesn't.
[My Firmware Folder](./firmware)

##

I don't know how well, or if any of this even works, but regardless, I think I learned a decent bit and did something cool that I've never done before.

**BOM**
------------------------------------

- 4x Cherry MX Switches
- 4x DSA Keycaps
- 4x M3 Heatset
- 4x M3x16mm Bolts
- 1x XIAO RP2040
- 2x SK6812 MINI Leds
- 1x 1x 0.91" 128x32 OLED Display
- 1x EC11 Rotary encoders
- 1x Case [3 printed parts(Bottom case, Top case, Knob]



