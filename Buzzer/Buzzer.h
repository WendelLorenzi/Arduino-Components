#ifndef _BUZZER_h
#define _BUZZER_h

#include "Arduino.h"


class Buzzer {
	public:
    Buzzer(pino);
		void begin();
	void ativa_buzzer(int frequencia, int vlr_delay);
  void desativa_buzzer(int vlr_delay);
	private:
		int pino;
	};

#endif
