
/******************************************************************************
    Platform:Arduino Course Programs.
    
    Written by: Pratiksha Kasbekar, Vidya Robotics Pvt. Ltd.
    Edited By: , Vidya Robotics Pvt. Ltd.
    Last Modification: 08-07-2017
        
    This program is used for  rotation of motor in both direction i.e Clockwise and Anti-Clockwise.
    DC BO motor is used for programming.
    Motor is connected to Arduino via Motor Driver IC L293D which is 16 pin IC.
    Pin Connections:
    Connect Digital pin 3 of arduino to Enable1 pin of L293D
    Connect Digital pin 4 of arduino to Input1 pin of L293D
    Connect Digital pin 5 of arduino to Input2 pin of L293D
    
    Hardware Setup:-
    Connect LED and switch Shield to Arduino board
    Connect  USB  cable between PC and Arduino Uno.
    Select Controller Board: Arduino UNO
    Select USBASP programmer type
********************************************************************************/
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}

void clk()              
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
}

void aclk()
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
}

void stp()
{
    digitalWrite(3,LOW);
}

void loop() 
{
  clk();
  delay(2000);
  stp();
  delay(1000);
  aclk();
  delay(2000);
   stp();
  delay(1000);
  
}
