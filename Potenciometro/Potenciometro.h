#ifndef _POTENCIOMENTRO_h
#define _POTENCIOMENTRO_h

#include "Arduino.h"

class Potenciometro {
	public:
    Potenciometro(int pin);
    int valor_pot();
	private:
    int pino;
	};

#endif
