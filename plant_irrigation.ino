int soilPin = A0;      // Soil Moisture Sensor
int relayPin = 7;      // Relay Module
int moistureValue;

void setup() {
pinMode(relayPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
moistureValue = analogRead(soilPin);

Serial.print("Soil Moisture: ");
Serial.println(moistureValue);

if (moistureValue > 600) {   // Soil is dry
digitalWrite(relayPin, LOW);   // Pump ON
}
else {                      // Soil is wet
digitalWrite(relayPin, HIGH);  // Pump OFF
}

delay(1000);
}