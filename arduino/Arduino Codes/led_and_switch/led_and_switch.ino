
/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 05-07-2017
        
    This is a simple LED and switch program.
    In this when switch is pressed LED will turn ON otherwise it will remain OFF.
    Switch is connected to pin 12 and LED is connected to pin 3.
    One terminal of switch is given to Arduino pin and second is given to GROUND.
    So use software pull up concept to make pin initially HIGH. So that when switch is not pressed we will receive HIGH at pin.
    Anode of LED is given arduino pin 3 and cathode is given to GROUND through resistor pin.
    
    
    Hardware Setup:-
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
    Connect switch and led to arduino and supply pins
********************************************************************************/
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  pinMode(11,OUTPUT);
  digitalWrite(11,HIGH);
     delay(1000);
     digitalWrite(11,LOW);
  
  digitalWrite(A0,HIGH); 
   digitalWrite(A1,HIGH);
    digitalWrite(12,HIGH);
     digitalWrite(13,HIGH);
   
     // pull up
}

void loop() 
{
    
  if(digitalRead(A0)==LOW)
  {
     digitalWrite(8,HIGH);
  }
  else
  {
     digitalWrite(8,LOW);
  }
   if(digitalRead(A1)==LOW)
  {
     digitalWrite(8,HIGH);
  }
  else
  {
     digitalWrite(8,LOW);
  }
   if(digitalRead(12)==LOW)
  {
     digitalWrite(8,HIGH);
  }
  else
  {
     digitalWrite(8,LOW);
  }
   if(digitalRead(13)==LOW)
  {
     digitalWrite(8,HIGH);
  }
  else
  {
     digitalWrite(8,LOW);
  }
 
}

