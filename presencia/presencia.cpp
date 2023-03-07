#include "presencia.h"

Presencia::Presencia(int pin, int ledPin): _pin(pin), _ledPin(ledPin){}


int Presencia::readPresencia(){
  _valor= digitalRead(_pin);
  return _valor;
}


void Presencia::show(){
  Serial.print("Presencia: ");
  Serial.print(_valor);
}

void Presencia::function(){
   if (_valor == HIGH)
  {
    digitalWrite(_ledPin, HIGH);
    delay(50);
    digitalWrite(_ledPin, LOW);
    delay(50);
  }
  else
  {
    digitalWrite(_ledPin, LOW);
  }
}
