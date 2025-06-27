// CloudNest Controller Firmware Stub

#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  // Setup mist, ionizer, UV, fan pins
  pinMode(2, OUTPUT); // Atomizer
  pinMode(3, OUTPUT); // Ionizer
  pinMode(4, OUTPUT); // UV-C
  pinMode(5, OUTPUT); // Fan
}

void loop() {
  digitalWrite(2, HIGH); // Mist On
  digitalWrite(3, HIGH); // Ionizer On
  delay(10000); // Run for 10 seconds
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(10000);
}