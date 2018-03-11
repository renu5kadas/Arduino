
/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 14-07-2017
        
    This is a Servo motor control program.
    In this we are going to rotate servo motor in clockwise and anticlockwise direction.
    The Micro servo motor which we are using permits 0-180 Angle Rotation
    Micro Servo motor Pin Connections:
    Brown/Black---- To Ground Pin
    Red------------ to +5V pin
    Any color other than above colors ----To digital pin 6 of Arduino(Prefer PWM Pin)
    
    Refer Datasheet of Servo motor before Starting programm.
    
    Hardware Setup:-
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
    Connect Servo motor to Arduino Board
********************************************************************************/
#include <Servo.h>

Servo servo;  // create servo object to control a servo


int angle = 0;    // variable to store the servo position

void setup()
{
  servo.attach(10);  // attaches the servo on pin 6 to the servo object
}

void loop()
{
  for (angle = 0; angle <= 180; angle += 1)
  
  { 
    // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(angle);              // tell servo to go to position in variable 'angle'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  for (angle = 180; angle >= 0; angle -= 1) 
  
  { 
    // goes from 180 degrees to 0 degrees
    servo.write(angle);              // tell servo to go to position in variable 'angle'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

