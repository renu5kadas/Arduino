int trig=6;
int echo=7;
int L1=9;
int L2=10;
int R1=11;
int R2=12;

void setup() {
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(R1,OUTPUT);
  pinMode(R1,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}
long duration;
int distance;
void loop() {
  forward();
 int distance = calculate_ud();
  if(distance<=5){
    leftturn();
    forward();
    delay(2500);
    rightturn();
    forward();
    delay(2500);
    rightturn();
    forward();
    delay(2500);
    leftturn();}
}
int calculate_ud(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW); 
  
  duration = pulseIn(echo,HIGH);
  distance = (duration /2)/ 29.1;
  
  Serial.println(distance);
  return distance;
}
void rightturn(){
    digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  delay(3000);
} 
void leftturn(){
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);
  delay(2500);
} 
void forward(){ 
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);   
 }


  
  
   
  
