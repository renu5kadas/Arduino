/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 29-06-2017
        
    This is a simple LED Blinking program.In this Led should blink six times only.
    After that it should remain OFF 
    Digital pin 13 is used for Alternate LED Blinking
      
    Hardware Setup:-
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
********************************************************************************/
void setup()
{
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

  for(int i=1;i<=6;i++)
  {
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }

}

void loop() 
{
  // put your main code here, to run repeatedly:

}
