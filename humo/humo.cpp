#include "humo.h"

Humo::Humo(int pin):_pin(pin){}

int Humo::readHumo(){
  int _gas = _pin;
  _gas = analogRead(_pin);  
  return _gas;
}

void Humo::show(){ 
  Serial.print("Valor: ");
  Serial.println(_gas);
}
