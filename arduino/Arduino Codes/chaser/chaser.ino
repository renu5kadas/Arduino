
/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 07-06-2017
        
    This is a simple LED Chaser program for ascending and descending order.
    8 LED's are connected to the 8 Pins of Arduino with a series resistor with each LED.
    You can Change chaser speed by varying the delay in loop.
    Digital pins from 2-9 are used for LED Chaser
    
    Hardware Setup:-
    Connect LED and switch Shield to Arduino board
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
********************************************************************************/
void setup() 
{
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
 
  int i;
  for ( i = 2; i < 10; i++)               // LED will blink in ascending Order starting from LED1 to LED8
  {
    digitalWrite(i,HIGH); delay(100);
    digitalWrite(i,LOW); 
  }
  for ( i = 9; i > 1; i--)              // LED will blink in descending Order starting from LED8 to LED1
  {
    digitalWrite(i,HIGH); delay(100);
    digitalWrite(i,LOW);
  }
}
