#include "LCD_header.hpp"
#include <mbed.h>
//library #include <TextLCD.h>
 
 
int main() {
    lcd.setMode(TextLCD::DispOn);
    lcd.setCursor(TextLCD::CurOff_BlkOff);
    lcd.setBacklight(TextLCD::LightOn);
    lcd.printf("*****LCDI2C*****");
    lcd.printf("      mbed    ->\n");
    bt_press.rise(&push_button);
     
}

void push_button(){
    led = 1;
    lcd.cls();
    if(BT ==0){
        BT=1;
        timeout.attach (&first_page, 0.5);
    }
    else{
        BT=0;
        timeout.attach (&second_page, 0.5);
    }
}
 
void first_page() {
    lcd.cls();
    led = 0;
    while(1){
        lcd.printf("informacao 1:\n");   
        lcd.printf("informacao 2:\n");   
    }
}
void second_page() {
    lcd.cls();
    led = 0;
    while(1){
        lcd.printf("informacao 3:\n");   
        lcd.printf("informacao 4:\n");   
    }
}