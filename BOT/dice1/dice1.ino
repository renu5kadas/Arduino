int x;
void setup() {
  // put your setup code here, to run once;
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(1,LOW);
  start();
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  x =rand()%6+1;
  if(x==1)
   one();
  if(x==2)
   two();
  if(x==3)
   three();
  if(x==4)
   four();
  if(x==5)
   five();
  if(x==6)
   six();
{
  
}
void start(){
 digitalWrite(2,HIGH);
 delay(300); 
 digitalWrite(3,HIGH);
 delay(300);
 digitalWrite(4,HIGH);
 delay(300);
 digitalWrite(5,HIGH);
 delay(300);
 digitalWrite(6,HIGH);
 delay(300);
 digitalWrite(7,HIGH);
 delay(300);
 digitalWrite(8,HIGH);
 delay(300);
}
void one(){
 digitalWrite(5,HIGH);
}
void two(){
 digitalWrite(3,HIGH);
 digitalWrite(6,HIGH);
}
void three(){
 digitalWrite(5,HIGH);
 digitalWrite(6,HIGH);
}
void four(){
 digitalWrite(2,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
}
void five(){
 digitalWrite(2,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(5,HIGH);
}
void six(){
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 digitalWrite(8,HIGH);
 digitalWrite(6,HIGH);
 digitalWrite(7,HIGH);
}

   

