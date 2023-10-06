#include "Sinal.h"
#include "Grafico.h"

Sinal::Sinal(double* sequencia, int comprimento){
    
    this->comprimento = comprimento;
    guardasequencia = new double[comprimento];

    for(int i = 0; i < comprimento; i++){
        guardasequencia[i] = sequencia[i];
    }
    this->sequencia = guardasequencia;
}


double* Sinal::getSequencia(){
    return sequencia;
}

int Sinal::getComprimento(){
    return comprimento;
}

void Sinal::imprimir(string nomeDoSinal){
    this->nomeDoSinal = nomeDoSinal;

    Grafico* G = new Grafico(nomeDoSinal, sequencia, comprimento);
    G->plot();
}

Sinal::~Sinal(){
   delete[] guardasequencia;
}