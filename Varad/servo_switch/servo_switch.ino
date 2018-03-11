#include<Servo.h>
Servo servo;
int angle = 0;
void setup() {
  // put your setup code here, to run once:
  servo.attach(10);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(2, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int sw = digitalRead(12);
  int sw1 = digitalRead(13);
  switch (sw)
  {
    case LOW:
      { for (; angle <= 180; angle++)
        { servo.write(angle);
          sw = digitalRead(12);
          if (sw == HIGH)
           break;
          delay(20);
        }
        break;
      }
    default:
      {
        break;
      }
  }
  switch (sw1)
  {
    case LOW:
      { for (; angle >= 0; angle--)
        { servo.write(angle);
         sw1 = digitalRead(13);
          if (sw1 == HIGH)
           break;
          delay(20);
        }
        break;
      }
    default:
      {
        break;
      }
  }
}
