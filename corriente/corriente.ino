#include "Corriente.h"
//conectar a puerto A0 del arduino
Corriente sensorCorriente(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float corriente = sensorCorriente.read();
  Serial.print("Corriente: ");
  Serial.print(corriente);
  Serial.println(" A");
  delay(1000);
}