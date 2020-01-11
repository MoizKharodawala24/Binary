void setup() {
  Serial.begin(9600);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  int x=10,a=0;
  for(int i=0;x>0;i++)
  {
    a=x%2;
    if(a==1 and i==0)
    {
      digitalWrite(1,HIGH);
      Serial.println("1");
      delay(100);
      }
    if(a==1 and i==1)
    {
      digitalWrite(2,HIGH);
      Serial.println("1");
      delay(100);
      }
    if(a==1 and i==2)
    {
      digitalWrite(4,HIGH);
      Serial.println("1");
      delay(100);
    }
    if(a==1 and i==3)
    {
      digitalWrite(7,HIGH);
      Serial.println("1");
      delay(100);
      }
    if(a==1 and i==4)
    {
      digitalWrite(8,HIGH);
      Serial.println("1");
      delay(100);
      }
    else
    {
      digitalWrite(1,LOW);
      digitalWrite(2,LOW);
      digitalWrite(4,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      Serial.println("0");
      delay(100);
      }
  x/2;
    }
    
}
