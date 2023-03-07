#include "magnetico.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  Magnetico mag = Magnetico(2); // Se asume que el sensor está conectado al pin 2

  int valor = mag.read();
  mag.show();

  delay(500);
}