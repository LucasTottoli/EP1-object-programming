#include <iostream>
#include "Sinal.h"
#include "Grafico.h"

using namespace std;

Sinal::Sinal(double* sequencia, int comprimento){
    for(int i = 0; i < comprimento; i++){
        guardasequencia[i] = sequencia[i];
    }
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