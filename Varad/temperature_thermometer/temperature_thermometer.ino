void setup() {
  // put your setup code here, to run once:


}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.begin(9600);
  int temp=analogRead(A0);
  int temp1=(temp*4.88)/10;
  Serial.print("\nDate=25/12/2017");
  Serial.print("\nTemperature: ");
  Serial.print(temp1);
  Serial.print(" C");
  delay(250);


}
