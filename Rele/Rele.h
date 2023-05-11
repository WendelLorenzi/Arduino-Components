#ifndef _RELE_h
#define _RELE_h

#include "Arduino.h"

class Rele {
	public:
    Rele(int pin);
		void begin();
    void estado_rele(int estado);
	private:
    int pino;
	};

#endif
