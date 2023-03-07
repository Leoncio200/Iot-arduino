#include "luz.h"

Luz::Luz(int pin, int ledPin) : _pin(pin), _ledPin(ledPin){}

void Luz::readLuz(){
  _valor = analogRead(_ledPin);
}

void Luz::show(){
  Serial.print("Valor de luz: ");
  Serial.println(_valor);
}

void Luz::function(){
  if (_valor >= 1010){
    digitalWrite(_ledPin, HIGH);
  }
  else {
    digitalWrite(_ledPin, LOW);
  }
}
