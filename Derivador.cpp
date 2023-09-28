#include "Derivador.h"

Derivador::Derivador(){
}

Sinal* Derivador::processar(Sinal* sinalIN){
    double *seqAnterior = sinalIN->getSequencia();
    double *seqAtual;
    int anterior = 0;

    for(int i = 0; i < sinalIN->getComprimento(); i++){
        seqAtual[i] = seqAnterior[i] - anterior;
        anterior = seqAnterior[i];
    }
    
    Sinal* sinalOUT = new Sinal(seqAtual, sinalIN->getComprimento());
    return sinalOUT;
}

Derivador::~Derivador(){
}

