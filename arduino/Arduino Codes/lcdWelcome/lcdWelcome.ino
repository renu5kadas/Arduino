
/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 26-07-2017
        
    This is Liquid Crystal Display based Message program 
    In this we are going to turn ON and turn OFF LED after certain interval of time known as delay.
    You can Change blinking rate of LED by varying the delay.
    Arduino has one on board lED which is connected to pin 13.
    
    Hardware Setup:-
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
********************************************************************************/
// include the library code:

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins

LiquidCrystal lcd(7,6,5,4,3,2);

void setup() 
{
  // set up the LCD's number of columns and rows:
  
  lcd.begin(16, 2);
  
  // Print a message to the LCD.
  
  lcd.print("Welcome");
}

void loop() 
{}

