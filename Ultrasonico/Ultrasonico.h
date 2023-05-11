#ifndef _RELE_h
#define _RELE_h

#include "Arduino.h"

class Ultrasonico {
	public:
    Ultrasonico(int recebe, int envia);
		void begin();
    int calc_distancia(); // Retorna a distancia que o obstaculo está do sensor em cm
	private:
    int pinrec;
    int pinenv;
	};

#endif
