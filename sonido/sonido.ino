#include "sonido.h"

#define LED 10

Sonido mic(0);

void setup() {
Serial.begin(9600);
pinMode(LED, OUTPUT);
}

void loop() {
int soundValue = mic.read();
Serial.println(soundValue);
if (soundValue > 100) {
digitalWrite(LED, HIGH);
} else {
digitalWrite(LED, LOW);
}
delay(100);
}