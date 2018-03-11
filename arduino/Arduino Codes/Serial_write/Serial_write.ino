/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 29-06-2017
        
    This is a simple Serial communication based program.
   .First we will enter alphabet/number in window.This will print same in Serial Monitor Window.
    For this program only two pins are important Pin 0 Rx and Pin 1 Tx.
    Baud Rate used for Serial communication =9600
    
    Hardware Setup:-
   
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
********************************************************************************/
void setup() 
{
    Serial.begin(9600);
}

void loop() 
{
  if(Serial.available()>0)
  {
    int rx=Serial.read();
    Serial.write(rx);
    delay(100);
  }

}
