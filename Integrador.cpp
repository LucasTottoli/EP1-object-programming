#include "Integrador.h"

Integrador::Integrador(){
}

Sinal* Integrador::processar(Sinal* sinalIN){
    double *seqAnterior = sinalIN->getSequencia();
    double *seqAtual;
    int anterior = 0;

    for(int i = 0; i < sinalIN->getComprimento(); i++){
        seqAtual[i] = seqAnterior[i] + anterior;
        anterior = seqAtual[i];
    }
}

Integrador::~Integrador(){
}