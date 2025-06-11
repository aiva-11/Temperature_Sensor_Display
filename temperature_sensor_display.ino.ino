const int sensorPin = A0;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);
  temperature = reading * 0.48828125;  // Convert ADC to Celsius
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);
}
