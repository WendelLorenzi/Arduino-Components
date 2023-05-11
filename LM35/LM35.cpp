#include "LM35.h"

LM35::LM35(int pin, float mi, float ma){
	pino= pin;
	min= mi;
	max=ma;
}

void LM35::begin(){
	pinMode(pino, INPUT);
}

float LM35::temperatura(){
	float temperatura;
	temperatura= float((((ler_sensor())*(max-min))/(1023))-min);
	return temperatura;
}

float LM35::ler_sensor(){
	float valor= analogRead(pino);
	return valor;
}
