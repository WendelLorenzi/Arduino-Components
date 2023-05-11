#include "Ultrasonic.h"
#include "Ultrasonico.h"


Ultrasonico::Ultrasonico(int recebe, int envia){
  pinrec= recebe;
  pinenv= envia;
}

Ultrasonic u(pinrec, pinenv);


void Ultrasonico::begin(){
  pinMode(pinrec, INPUT);
  pinMode(pinenv, OUTPUT);
}

int Ultrasonico::calc_distancia(){
  digitalWrite(pinenv, LOW);
    delayMicroseconds(2);
    digitalWrite(pinenv, HIGH);
    delayMicroseconds(10);
    digitalWrite(pinenv, LOW);
    float distancia = (u.Ranging(CM)); // a função Ranging() faz a conversão do tempo de resposta do pino (pinenv) em centimentros
    int resultado= round(distancia); // Faz a aproximação e armazena em um inteiro
    return resultado;
}
