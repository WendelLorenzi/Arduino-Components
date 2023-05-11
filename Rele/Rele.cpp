#include "Rele.h"

Rele::Rele(int pin){
  pino=pin;
}

void Rele::begin(){
	pinMode(pino, OUTPUT);
}

void Rele::estado_rele(int estado){
  digitalWrite(pino, estado);
}
