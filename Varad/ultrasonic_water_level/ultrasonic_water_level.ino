int trig = A2;
int echo = A3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  int distance, duration, waterlevel, x;
  digitalWrite(trig, LOW);
  delay(1);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration / 58;
  waterlevel = 74 - distance;
  x = map(waterlevel, 0, 72, 0, 100);
  Serial.print("WATER LEVEL IS ");
  Serial.print(x);
  Serial.println(" %");
  digitalWrite(11, LOW);
  switch (waterlevel)
  {
    case 72:
      {
        eight();

        break;

      }
    case 71:
      {
        eight();

        break;

      }
    case 70:
      {
        eight();

        break;
      }
    case 69:
      {
        eight();

        break;

      }
    case 68:
      {
        eight();

        break;

      }
    case 67:
      {
        eight();
        break;
      }
    case 66:
      {
        eight();
        break;
      }
    case 65:
      {
        eight();
        break;
      }
    case 64:
      {
        eight();
        break;
      }
    case 63:
      {
        seven();
        break;
      }
    case 62:
      {
        seven();
        break;
      }
    case 61:
      {
        seven();
        break;
      }
    case 60:
      {
        seven();
        break;
      }
    case 59:
      {
        seven();
        break;
      }
    case 58:
      {
        seven();
        break;
      }
    case 57:
      {
        seven();
        break;
      }
    case 56:
      {
        six();
        break;
      }
    case 55:
      {
        six();
        break;
    }    case 54:
      {
        six();
        break;
      }
    case 53:
      {
        six();
        break;
      }
    case 52:
      {
        six();
        break;
      }
    case 51:
      {
        six();
        break;
      }
    case 50:
      {
        six();
        break;
      }
    case 49:
      {
        six();
        break;
      }
    case 48:
      {
        six();
        break;
      }
    case 47:
      {
        six();
        break;
      }
    case 46:
      {
        six();
        break;
    }    case 45:
      {
        five;
        break;
      }
    case 44:
      {
        five();
        break;
      }
    case 43:
      {
        five();
        break;
      }
    case 42:
      {
        five();
        break;
      }
    case 41:
      {
        five();
        break;
      }
    case 40:
      {
        five();
        break;
      }
    case 39:
      {
        five();
        break;
      }
    case 38:
      {
        five();
        break;
      }
    case 37:
      {
        five();
        break;
    }    case 36:
      {
        four;
        break;
      }
    case 35:
      {
        four();
        break;
      }
    case 34:
      {
        four();
        break;
      }
    case 33:
      {
        four();
        break;
      }
    case 32:
      {
        four();
        break;
      }
    case 31:
      {
        eight();
        break;
      }
    case 30:
      {
        four();
        break;
      }
    case 29:
      {
        four();
        break;
      }
    case 28:
      {
        four();
        break;
    }    case 27:
      {
        three();
        break;
      }
    case 26:
      {
        three();
        break;
      }
    case 25:
      {
        three();
        break;
      }
    case 24:
      {
        three();
        break;
      }
    case 23:
      {
        three();
        break;
      }
    case 22:
      {
        three();
        break;
      }
    case 21:
      {
        three();
        break;
      }
    case 20:
      {
        three();
        break;
      }
    case 19:
      {
        three();
        break;
    }    case 18:
      {
        two();
        break;
      }
    case 17:
      {
        two();
        break;
      }
    case 16:
      {
        two();
        break;
      }
    case 15:
      {
        two();
        break;
      }
    case 14:
      {
        two();
        break;
      }
    case 13:
      {
        two();
        break;
      }
    case 12:
      {
        two();
        break;
      }
    case 11:
      {
        two();
        break;
      }
    case 10:
      {
        two();
        break;
    }    case 9:
      {
        one();
        break;
      }
    case 8:
      {
        one();
        break;
      }
    case 7:
      {
        one();
        break;
      }
    case 6:
      {
        one();
        break;
      }
    case 5:
      {
        one();
        break;
      }
    case 4:
      {
        no();
        break;
      }
    case 3:
      {
        no();
        break;
      }
    case 2:
      {
        no();
        break;
      }
    case 1:
      {
        no();
        break;
      }


  }
  if (x >= 95 && x <= 100)
    digitalWrite(11, HIGH);
  delay(1000);
}
void eight()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
}

void seven()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}
void six()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}  void five()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
void four()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
void three()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

}
void two()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
void one()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

}
void no()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
