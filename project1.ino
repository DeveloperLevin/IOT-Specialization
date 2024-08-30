void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(7, HIGH);
  delay(3000);
  digitalWrite(7, LOW);
  delay(500);
}
