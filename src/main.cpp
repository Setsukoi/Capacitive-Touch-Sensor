#include <Arduino.h>
#include <CapacitiveSensor.h>

CapacitiveSensor sensor(4, 2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long reading = sensor.capacitiveSensor(30);
  Serial.println(reading);
  delay(100);
}