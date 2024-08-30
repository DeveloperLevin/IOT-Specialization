#define LED_PIN 11
#define BUTTON_PIN 7

void setup()
{
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(7, INPUT);
}

void loop(){
  if (digitalRead(BUTTON_PIN) == 0){
    digitalWrite(LED_PIN, LOW);
    Serial.println("Button is not pressed");
  }
  else{
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Button is pressed");
  }
  
}
