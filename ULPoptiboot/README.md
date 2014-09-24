ULPoptiboot
===========

Custom Optiboot for Ultra Low Power Wireless Arduino Node  
Copyright Charles-Henri Hallard (2014)  
More on my [blog][2]  


The added code will result in a compiled size of just under 1kb  
(Originally Optiboot is under 0.5kb)


##Features
List of features implemented in this version:

- Designed Ultra Low Power Wireless Node
- Power OFF Wireless Radio Module at boot
- Power OFF Sensors at boot
- Direct boot to application Sketch (no wait)
- Entering Bootloading only by pressing Wake switch or when FTDI Adapter is connected
- Default Arduino LED replaced by WS2812B RGB LED
- Included driver for WS2812(B) LED
- Exporting function to drive the WS2812(B) LED (or a strip) from Arduino Sketch

This is an initial release, it could contain bugs, but works fine for now. Please let me know if you find issues.

###Installation
Copy the content of the ULPoptiboot folder into a new folder in your Arduino bootloaders folder  
I copied mine at : arduino-install-dir\hardware\arduino\bootloaders\optiboot\ulpnode\  
Backup the original files before overwrite all files.  
make ulpnode  

###Possible issues
- None for now

##Blog dedicated post
See this [post][3] for detailed information

##Why
- To reduce consumption in Ultra Low Power Node
- To be able do drive RGB LED

##Reference
Original Optiboot Bootloader 

- Optiboot on [google code][5]

##License
[Attribution-ShareAlike CC BY-SA][6]

##Misc
See news and other projects on my [blog][1] 
 
[1]: http://hallard.me
[2]: http://hallard.me/bp-ulpnode/
[3]: http://hallard.me/ulpnode-bootloader/
[4]: https://github.com/hallard/ULPNode/ULPoptiboot/Examples/WS2812_Demo_Sketch/WS2812_Demo_Sketch.ino
[5]: https://code.google.com/p/optiboot/
[6]: https://creativecommons.org/licenses/
