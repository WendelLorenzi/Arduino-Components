#ifndef _LEDRGB_h
#define _LEDRGB_h

#include "Arduino.h"

class LedRGB {
	public:
    LedRGB(int r, int g, int b);
		void begin();
		void red(int estado);
		void green(int estado);
		void blue(int estado);
	private:
		int pinB;
		int pinG;
		int pinR;
	};

#endif
