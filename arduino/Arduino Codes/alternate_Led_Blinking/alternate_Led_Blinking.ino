/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 29-06-2017
        
    This is a simple Alternate LED Blinking program 
    8 LED's are connected to the 8 Pins of Arduino with a series resistor with each LED.
    Digital pins from 2-9 are used for Alternate LED Blinking
    When Leds connected to pin 2,4,6,8 are ON then LEdsconnected to 3,5,7,9 should be OFF and vice versa
    
    Hardware Setup:-
    Connect LED and switch Shield to Arduino board_
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
********************************************************************************/
void setup()
{
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH); 
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(3,LOW); 
  digitalWrite(5,LOW); 
  digitalWrite(7,LOW); 
  digitalWrite(9,LOW); 
  delay(1000);             //1 millisecond delay
  digitalWrite(3,HIGH); 
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(2,LOW); 
  digitalWrite(4,LOW); 
  digitalWrite(6,LOW); 
  digitalWrite(8,LOW); 
  delay(1000);            //1 millisecond delay

}
