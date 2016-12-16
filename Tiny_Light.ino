int f;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(A1, INPUT);

}
void loop()
{
  f=analogRead(A1);
  f=map(f,0,1023,50,100000);
  digitalWrite(0, HIGH);
  delay(f);
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  delay(f);
  digitalWrite(1, LOW);

}
