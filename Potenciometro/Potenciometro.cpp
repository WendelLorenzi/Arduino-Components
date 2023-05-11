#include "Potenciometro.h"

Potenciometro::Potenciometro(int pin){
  pino=pin;
}

int Potenciometro::valor_pot(){
	int valor= analogRead(pino);
	int pwm= map(valor, 0, 1023, 0, 255);
	return pwm;
}
// Retorno entre 0 a 255
