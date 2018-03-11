void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  
  int temp=analogRead(A1);
  int temp1=(temp*4.88)/10;
  Serial.println(temp1);
  delay(250);


}
