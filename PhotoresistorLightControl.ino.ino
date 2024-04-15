const int lightSensorPin = A0; 
const int ledPin = 13;

void setup() {
  pinMode(lightSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(lightSensorPin);
  if (lightLevel < 500) 
  {
    digitalWrite(ledPin, HIGH);
  } else 
  {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}