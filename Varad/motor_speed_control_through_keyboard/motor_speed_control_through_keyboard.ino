void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  char ch=Serial.read();
    if(ch=='C')
    {
      digitalWrite(4,HIGH);
      analogWrite(3,150);
      analogWrite(5,0);
      delay(1000);
      digitalWrite(4,LOW); 
    }
     if(ch=='D')
    {
      digitalWrite(4,HIGH);
      analogWrite(3,250);
      analogWrite(5,0);
      delay(1000);
      digitalWrite(4,LOW); 
    }
     if(ch=='A')
    {
      digitalWrite(4,HIGH);
      analogWrite(3,0);
      analogWrite(5,150);
      delay(1000);
      digitalWrite(4,LOW); 
    }
     if(ch=='B')
    {
      digitalWrite(4,HIGH);
      analogWrite(3,0);
      analogWrite(5,250);
      delay(1000);
      digitalWrite(4,LOW); 
    } 

}
