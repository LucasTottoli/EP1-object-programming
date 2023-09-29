#include "Amplificador.h"

Amplificador::Amplificador(double ganho){
    this->ganho = ganho;
}

Sinal* Amplificador::processar(Sinal* sinalIN){
    double *seq = sinalIN->getSequencia();
    
    for (int i = 0; i < sinalIN->getComprimento() ;i++){
        seq[i] = seq[i]*ganho;
    }
    Sinal* sinalOUT = new Sinal(seq, sinalIN->getComprimento());
    
    return sinalOUT;
}


double Amplificador::getGanho(){
    return ganho;
}

void Amplificador::setGanho(double ganho){
    this->ganho = ganho;
}

Amplificador::~Amplificador(){
}