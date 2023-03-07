#include "Humo.h"

const int pin= A0;

Humo humo(pin);

void setup() {
   pinMode(pin, INPUT);
   Serial.begin(9600);
}

void loop() {
  humo.readHumo();
  
    if (Serial.available() > 0) {
    String a = Serial.readStringUntil('\n');

    if (a == "HM" || a == "hm") {
      humo.show();
    }
  }

}
