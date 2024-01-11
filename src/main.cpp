#include <Arduino.h>

// put function declarations here:
int sensorValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A1);

  // print analogRead values
  Serial.print("Analog Value: ");
  Serial.println(sensorValue);

  // print voltages
  Serial.print("Voltage Value: ");
  Serial.println((sensorValue / 4095.0) * 3.3);

  delay(1000);
}
