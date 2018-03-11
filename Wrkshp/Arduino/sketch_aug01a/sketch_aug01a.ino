void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
 digitalWrite(5,HIGH); 
 digitalWrite(6,LOW);
 digitalWrite(7,HIGH);
 digitalWrite(8,LOW);
 delay(2000);
 digitalWrite(5,LOW); 
 digitalWrite(6,HIGH);
 digitalWrite(7,LOW);
 digitalWrite(8,HIGH);
 delay(2000);
  

}
