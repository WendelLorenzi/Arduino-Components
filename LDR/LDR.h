#ifndef _LDR_h
#define _LDR_h

#include "Arduino.h"

class LDR {
	public:
    LDR(pino);
		void begin();
    int valor_LDR();
	private:
		int pino;
	};

#endif
