#include <Arduino.h>

const int ledPin = 13;   // ใช้ LED onboard ของ Arduino UNO

void setup() {
  pinMode(ledPin, OUTPUT);  // ตั้งค่าเป็น output
}

void loop() {
  digitalWrite(ledPin, HIGH);  // เปิด LED
  delay(500);                  // รอ 0.5 วินาที

  digitalWrite(ledPin, LOW);   // ปิด LED
  delay(500);                  // รอ 0.5 วินาที
}

