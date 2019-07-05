#ifndef MAIN_HPP
#define MAIN_HPP

#include "mbed.h"
//Library #include <TextLCD.h>

bool BT = 0;
InterruptIn bt_press (PA_0);
Timeout timeout;
DigitalOut led(PD_13);

 
// I2C Communication
I2C i2c_lcd(PB_9,PB_8); // SDA, SCL
 

//I2C Portexpander PCF8574
TextLCD_I2C lcd(&i2c_lcd, 0x7E, TextLCD::LCD16x2, TextLCD::HD44780); // I2C bus, PCF8574 Slaveaddress, LCD Type

void push_button();
void first_page();
void second_page();

#endif