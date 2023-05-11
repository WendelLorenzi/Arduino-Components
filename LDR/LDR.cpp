#include "LDR.h"

LDR::LDR(int pin){
  pino=pin;
}
void LDR::begin(){
	pinMode(pino, INPUT);
}

int LDR::valor_LDR(){
	int valor= analogRead(pino);
	return valor;
}

// Valor varia de 0 a 1023
// valor baixo= 0 - claro
//valor alto= 1023 - escuro
