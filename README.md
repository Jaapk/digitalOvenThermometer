# digitalOvenThermometer

Project based on Grove Thermocouple and 
7 segment LED display driven by pcf8573
This was an undocumented low cost unit I purchased on the street in Thailand.

https://www.ti.com/lit/ds/symlink/pcf8574.pdf

** The Display **

  Showing number 0-9 on a Common Anode 7-segment LED display 
  through i2c using pcf8574
  Displays the numbers 0-9 on the display, with one second inbetween.

<img title="a title" alt="Alt text" src="https://upload.wikimedia.org/wikipedia/commons/thumb/0/02/7_segment_display_labeled.svg/1200px-7_segment_display_labeled.svg.png

value to display number on 7 segment led display 

0 => 63
1 => 1
2 => 91
3 => 79
4 => 102
5 => 109
6 => 125
7 => 7
8 => 127
9 => 111

Display address 0x34 to 0x37 (for the numbers)
address 0x24 for dp

Library used 
#include "PCF8574.h"

** The Thermocouple **

Thermocouple used from SEEED (Grove) using analog inputs

// Thmc -> A5
// RoomTemp -> A4

#include "High_Temp.h"
https://github.com/Seeed-Studio/Grove_HighTemp_Sensor
https://github.com/Seeed-Studio/Grove_HighTemp_Sensor/blob/master/High_Temp.h
