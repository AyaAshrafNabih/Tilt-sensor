// C++ code
//
int DC =5;
int T =3;
int sensorVal;
//int motorVal;
void setup()
{
  pinMode(DC, OUTPUT);
  pinMode(T, INPUT);
}

void loop()
{
 sensorVal=digitalRead(T);
  if(sensorVal==HIGH)
  {
  analogWrite(DC,HIGH);
}
  else
  {
     analogWrite(DC,LOW);
  }
}
