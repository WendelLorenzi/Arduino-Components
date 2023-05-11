#ifndef _LM35_h
#define _LM35_h

#include "Arduino.h"


class LM35 {
	public:
		LM35(int pin, float mi, float ma);
		void begin();
		float temperatura();
	private:
		int pino;
		float ler_sensor();
		float min;
		float max;
	};

#endif
