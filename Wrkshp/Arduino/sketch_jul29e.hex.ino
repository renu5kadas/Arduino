 int a = 0;
void setup() {
  // put your setup code here, to run once:
  digitalWrite(13,LOW);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(a<=2)
{pinMode(13,HIGH);
delay(1000);
pinMode(13,LOW);
delay(1000);
a++;
}
}
