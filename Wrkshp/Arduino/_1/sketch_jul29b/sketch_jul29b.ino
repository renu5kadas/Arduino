void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(8);
  if(value==1){
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(12,LOW); 
    digitalWrite(13,LOW);
  }
  Serial.println(value);
  

}
