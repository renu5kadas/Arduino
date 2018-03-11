 int i = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
 
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  y:char ch = Serial.read();
 if (ch == 'C')
  {
    x:digitalWrite(4, HIGH);
    analogWrite(3, 0);
    analogWrite(5, i);
    ch=Serial.read();
    if(ch=='R')
     i+=30;
    if(ch=='L')
     i-=30; 
    if(ch=='e')
     {
      digitalWrite(4,LOW);
      goto y;
     }
    if(ch=='U')
     goto w; 
    goto x; 
  }
  else
    digitalWrite(4, LOW);
      z: ch = Serial.read();
 if (ch == 'U')
  {
    w:digitalWrite(4, HIGH);
    analogWrite(3, i);
    analogWrite(5, 0);
    ch=Serial.read();
    if(ch=='R')
     i+=30;
    if(ch=='L')
     i-=30; 
    if(ch=='e')
     {
      digitalWrite(4,LOW);
      goto z;
     }
    if(ch=='C')
     goto x; 
    goto w; 
  }
  else
    digitalWrite(4, LOW);

}
