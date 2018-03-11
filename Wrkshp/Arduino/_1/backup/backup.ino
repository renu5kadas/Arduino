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
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
long duration;
int distance;
void loop() {
  forword();
  int distance_in_cm = calculate_ud();
  leftturn();
  distance_in_cm = calculate_ud();
  leftturn();   
  distance_in_cm = calculate_ud();
  leftturn();
  distance_in_cm = calculate_ud();
  leftturn();
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
  if(distance<=5)
  {
  digitalWrite(13,HIGH);
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(R2,HIGH);
  delay(2500);
  }
  forword(); 
} 
void leftturn(){
 if(distance<=5)
  {
  digitalWrite(13,HIGH);
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);
  delay(2500);
  }
  forword();
} 
void forword(){ 
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);   
 }
 

  
  
   
  
