#include "Botao.h"

Botao::Botao(int pin){
  pino=pin;
}

void Botao::begin(){
	pinMode(pino, INPUT);
}

int Botao::estado_botao(){
	int estado_botao= digitalRead(pino);
	return estado_botao;
}
