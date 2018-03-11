

/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 05-07-2017
        
    This is a simple LED Blink Program.
    In this we are going to turn ON and turn OFF LED after certain interval of time known as delay.
    You can Change blinking rate of LED by varying the delay.
    Arduino has one on board lED which is connected to pin 13.
    
    Hardware Setup:-
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
********************************************************************************/
void setup()
{
  pinMode(13,OUTPUT);
}

void loop() 
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
