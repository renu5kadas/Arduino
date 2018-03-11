void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr=analogRead(A2);
  int temp=analogRead(A1);
  int temp1=(temp*4.88)/10;
  Serial.print("\nlight is ");
  Serial.print(ldr);
  Serial.print("\ntemp. is ");
  Serial.print(temp1);
  if(ldr<=15)
   digitalWrite(2,HIGH);
  else
   digitalWrite(2,LOW);
  if(temp1>=30)
   digitalWrite(3,HIGH);
  else
   digitalWrite(3,LOW);
      
  
  

}
