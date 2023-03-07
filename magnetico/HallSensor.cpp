#include "magnetico.h"

Magnetico::Magnetico(int _pin) {
  pinMode(_pin, INPUT);
  pin = _pin;
}

int Magnetico::read() {
  valor = digitalRead(pin);
  return valor;
}

void Magnetico::show() {
  Serial.print("Valor: ");
  Serial.println(valor);
}