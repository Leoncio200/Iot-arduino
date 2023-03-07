#include "Corriente.h"
#include "flama.h"
#include "humo.h"
#include "luz.h"
#include "magnetico.h"
#include "presencia.h"
#include "sonido.h"
#include "temperatura.h"

//conectar a puerto A0 del arduino
Corriente sensorCorriente(A0);
flama sensorFlama(7);
humo sensorHumo(A1);
luz sensorLuz(9);
magnetico sensorMagnetico(2);
presencia sensorPresencia(5,13);
sonido sensorSonido(10);
temperatura sensorTemperatura(6);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float corriente = sensorCorriente.read();
  flama = sensorFlama.read();
  humo = sensorHumo.readHumo();
  luz = sensorLuz.read();
  magnetico = sensorMagnetico.read();
  presencia = sensorPresencia.readPresencia(); 
  sonido = sensorSonido.read();
  temperatura = sensorTemperatura.readTemperature();
    
  Serial.println("Corriente:  A");
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
  delay(1000);
}