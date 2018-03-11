void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
   for (i = 0; i < 256; i++)
  {
    analogWrite(11, i);
    delay(10);
    if (i == 255)
      break;
  }
 for (i = 255; i > -1; i--)
  {
    analogWrite(11, i);
    delay(10);
    if (i == 0)
      break;
  }
}
