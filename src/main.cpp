#include <Arduino.h>
#define LED_RED    5
#define LED_GREEN  4
#define LED_YELLOW 8

#define LED_D4     12
#define LED_D5     13

void setup() {
  pinMode(LED_D4, OUTPUT);
  pinMode(LED_D5, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  // digitalWrite(LED_RED, HIGH);
  // digitalWrite(LED_GREEN, HIGH);
  // digitalWrite(LED_YELLOW, HIGH);
}

void loop() {
  digitalWrite(LED_D4, HIGH);
  digitalWrite(LED_D5, LOW);
  delay(1000);
  digitalWrite(LED_D4, LOW);
  digitalWrite(LED_D5, HIGH);
  delay(1000);
  digitalWrite(LED_D5, LOW);
  digitalWrite(LED_RED, HIGH);
  delay(1000);
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_GREEN, HIGH);
  delay(1000);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, HIGH);
  delay(1000);
  digitalWrite(LED_YELLOW, LOW);
  delay(1000);
}
