int sensorPin = A0;   // LM35 connected to A0

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * (5.0 / 1023.0); // Convert to voltage
  float temperatureC = voltage * 100;          // LM35: 10mV per degree

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000); // Delay 1 second
}
