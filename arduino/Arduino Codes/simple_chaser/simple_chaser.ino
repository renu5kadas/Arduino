
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
}
