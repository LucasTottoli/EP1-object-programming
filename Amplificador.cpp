#include <iostream>
#include "Amplificador.h"
#include "Sinal.h"

using namespace std;

Amplificador::Amplificador(double ganho){
}

Sinal*Amplificador::processar(Sinal* sinalIN){
    double *seq = sinalIN->getSequencia();
    for (int i = 0; i < sinalIN->getComprimento() ;i++)
        seq[i] = seq[i]*ganho;
    Sinal* SinalOUT = new Sinal(seq, sinalIN->getComprimento());
}


double Amplificador::getGanho(){
    return ganho;
}

void Amplificador::setGanho(double ganho){
    this->ganho = ganho;
}

Amplificador::~Amplificador(){
}