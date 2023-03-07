#include "Corriente.h"

#define ACS_OFFSET 2500  // Offset de voltaje del ACS712
#define ACS_SENSITIVITY 66  // Sensibilidad del ACS712 (mV/A)

Corriente::Corriente(int _pin) {
  pin = _pin;
  pinMode(pin, INPUT);
}

float Corriente::read() {
  int sensorValue = analogRead(pin);
  float voltage = (sensorValue / 1023.0) * 5000.0; // Conversion a voltaje
  float current = (voltage - ACS_OFFSET) / ACS_SENSITIVITY;
  return current;
}