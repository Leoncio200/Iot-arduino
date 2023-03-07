#include "Presencia.h"
const int ledPin= 13;
const int pirPin= 5;

Presencia presencia(pirPin, ledPin);

void setup() {
  Serial.begin(9600);
}

void loop() {
  presencia.readPresencia();
   if (Serial.available() > 0) {
    String a = Serial.readStringUntil('\n');

    if (a == "LUZ" || a == "luz") {
      presencia.show();
    }
  }
  presencia.function();

}
