#include <Arduino.h>

const int LED1 = 12;  // LED1 ต่อกับ D12
const int LED2 = 13;  // LED2 ต่อกับ D13

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  delay(500);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(500);
}

