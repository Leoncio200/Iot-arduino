#include "Luz.h"

const int pin = 9;
const int valor = 0;
const int ledPin = 1;

Luz luz(pin, ledPin);

void setup() {
  Serial.begin(9600);

}

void loop() {
  luz.readLuz();
  if (Serial.available() > 0) {
    String a = Serial.readStringUntil('\n');

    if (a == "TH" || a == "th") {
      luz.show();
    }
  }
  luz.function();

}
