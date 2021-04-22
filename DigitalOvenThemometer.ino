
/*
  Showing number 0-9 on a Common Anode 7-segment LED display 
  through i2c using pcf8574
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D


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
  This example code is in the public domain.
 */
#

#include "PCF8574.h"
//#include <Wire.h>
#define PCF8574_ADDR (0x24)


PCF8574 PCF_24(0x24);  // add leds to lines      (used as output)
PCF8574 PCF_34(0x34);  // add leds to lines      (used as output)
PCF8574 PCF_35(0x35);  // add leds to lines      (used as output)
PCF8574 PCF_36(0x36);  // add leds to lines      (used as output)
PCF8574 PCF_37(0x37);  // add leds to lines      (used as output)



int a;
int b;
int c;
int delay_value = 1000;

// Thmc -> A5
// RoomTemp -> A4


#include "High_Temp.h"
HighTemp ht(A0, A1);


void setup() {
  // put your setup code here, to run once:
//  Wire.begin();
//  Wire.beginTransmission(PCF8574_ADDR);
//  Wire.write(0xAA);
//  Wire.endTransmission();
//  delay(500);
//  Wire.beginTransmission(PCF8574_ADDR);
//  Wire.write(B1110101);
//  Wire.endTransmission();

  
    PCF_24.begin();
//    PCF_34.begin();
//    PCF_35.begin();
//    PCF_36.begin();
//    PCF_37.begin();

    PCF_24.write8(117);
//    PCF_34.write8(0);
//    PCF_35.write8(0);
//    PCF_36.write8(63);
//    PCF_37.write8(63);
//    PCF_34.write(0, 1);

    ht.begin();
    
    Serial.begin(9600);
    Serial.println(ht.getThmc());
    delay(500);




}

void scan() {
    for (int i = 0; i < 255; i++) {
    Serial.println(i, BIN);
    
    PCF_34.write8(i);
    delay(500);
    }

}

void loop() {
  // put your main code here, to run repeatedly:
  
//  scan();


//  for (int i = 0; i < 10; i++)  {



//  for (int i = 0; i < 255; i++)  {
   int i = ht.getThmc();
   Serial.println(i);
   
   a =  i % 10;
   b =  (i / 10) % 10; 
   c =  (i / 100) % 10;

//    Serial.print(" c ");
//    Serial.print(c);
//    Serial.print(" b ");
//    Serial.print(b);
//    Serial.print(" a ");
//    Serial.println(a);

    delay(100);


  switch (a) {
  case 0:
    //do something when var equals 0
    PCF_37.write8(63);
    delay(delay_value);
    break;
  case 1:
    //do something when var equals 1
    PCF_37.write8(06);
    delay(delay_value);
    break;
  case 2:
    //do something when var equals 1
    PCF_37.write8(91);
    delay(delay_value);
    break;
  case 3:
    //do something when var equals 1
    PCF_37.write8(79);
    delay(delay_value);
    break;
  case 4:
    //do something when var equals 1
    PCF_37.write8(102);
    delay(delay_value);
    break;
  case 5:
    //do something when var equals 1
    PCF_37.write8(109);
    delay(delay_value);
    break;
  case 6:
    //do something when var equals 1
    PCF_37.write8(125);
    delay(delay_value);
    break;
  case 7:
    //do something when var equals 1
    PCF_37.write8(07);
    delay(delay_value);
    break;
  case 8:
    //do something when var equals 1
    PCF_37.write8(127);
    delay(delay_value);
    break;
  case 9:
    //do something when var equals 1
    PCF_37.write8(111);
    delay(delay_value);
    break;

  default:
    // if nothing else matches, do the default
    // default is optional
    break;
   }


 
  switch (b) {
  case 0:
    //do something when var equals 0
    PCF_36.write8(63);
    delay(delay_value);
    break;
  case 1:
    //do something when var equals 1
    PCF_36.write8(06);
    delay(delay_value);
    break;
  case 2:
    //do something when var equals 1
    PCF_36.write8(91);
    delay(delay_value);
    break;
  case 3:
    //do something when var equals 1
    PCF_36.write8(79);
    delay(delay_value);
    break;
  case 4:
    //do something when var equals 1
    PCF_36.write8(102);
    delay(delay_value);
    break;
  case 5:
    //do something when var equals 1
    PCF_36.write8(109);
    delay(delay_value);
    break;
  case 6:
    //do something when var equals 1
    PCF_36.write8(125);
    delay(delay_value);
    break;
  case 7:
    //do something when var equals 1
    PCF_36.write8(07);
    delay(delay_value);
    break;
  case 8:
    //do something when var equals 1
    PCF_36.write8(127);
    delay(delay_value);
    break;
  case 9:
    //do something when var equals 1
    PCF_36.write8(111);
    delay(delay_value);
    break;

  default:
    // if nothing else matches, do the default
    // default is optional
    break;
   }


    switch (c) {
  case 0:
    //do something when var equals 0
    PCF_35.write8(63);
    delay(delay_value);
    break;
  case 1:
    //do something when var equals 1
    PCF_35.write8(06);
    delay(delay_value);
    break;
  case 2:
    //do something when var equals 1
    PCF_35.write8(91);
    delay(delay_value);
    break;
  case 3:
    //do something when var equals 1
    PCF_35.write8(79);
    delay(delay_value);
    break;
  case 4:
    //do something when var equals 1
    PCF_35.write8(102);
    delay(delay_value);
    break;
  case 5:
    //do something when var equals 1
    PCF_35.write8(109);
    delay(delay_value);
    break;
  case 6:
    //do something when var equals 1
    PCF_35.write8(125);
    delay(delay_value);
    break;
  case 7:
    //do something when var equals 1
    PCF_35.write8(07);
    delay(delay_value);
    break;
  case 8:
    //do something when var equals 1
    PCF_35.write8(127);
    delay(delay_value);
    break;
  case 9:
    //do something when var equals 1
    PCF_35.write8(111);
    delay(delay_value);
    break;

  default:
    // if nothing else matches, do the default
    // default is optional
    break;
   }
  delay(delay_value);
}
