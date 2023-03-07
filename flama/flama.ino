#include "flama.h"
//conectar puerto 7
int pinFlama = 7;

Flama flama(pinFlama);

void setup() {
Serial.begin(9600);
}

void loop() {
bool flamaDetectada = flama.read();
if (flamaDetectada) {
Serial.println("¡Cuidado, se ha detectado una flama!");
} else {
Serial.println("No se ha detectado ninguna flama.");
}
delay(500);
}