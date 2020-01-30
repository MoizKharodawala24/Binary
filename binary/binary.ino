void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  //x is the digit you want the binary lights for
  int x=5,a=0;
  for(int i=2;x>0;i++)
  {
    a=x%2;
    //Serial.println(a);
    x=x/2;
    //Serial.println(x);
    if(a==1)
    {
      digitalWrite(i,HIGH);
      }
    else{
      digitalWrite(i,LOW);
      }
    }
}
