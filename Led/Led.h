#ifndef _LED_h
#define _LED_h
// As duas linhas acima são diretivas de compilação condicional, que usualmente constam nesta mesma forma (alterando apenas o nome da biblioteca) em todos os arquivos de cabeçalho. Sua finalidade é evitar problemas caso um mesmo programa tente incluir indevidamente mais de uma vez a mesma biblioteca.

#include "Arduino.h"
// A linha acima faz com que a biblioteca possa usar os tipos e outras definições do próprio Arduino.


class Led {
	public:
		Led(int p);
		void begin();
		void led(int estado, int vlr_delay);
	private:
		int pino;

	};

#endif
