#include "Led.h"

Led::Led(int p){
	pino=p;
}

void Led::begin(){
	  pinMode(pino, OUTPUT);
}

void Led::led(int estado, int vlr_delay){
		digitalWrite(pino, estado);
		delay(vlr_delay);
}
