#include "Buzzer.h"

Buzzer::Buzzer(int pin){
  pino=pin;
}

void Buzzer::begin(){
	pinMode(pino, OUTPUT);
}


void Buzzer::ativa_buzzer(int frequencia, int vlr_delay){
	tone(pino, frequencia);
	delay(vlr_delay);

}

void Buzzer::desativa_buzzer(int vlr_delay){
	noTone(pino);
	delay(tempo);
}
