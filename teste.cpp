#include <iostream>
#include "Sinal.h"

using namespace std;

void teste(){
    double sequencia[2] = {1, 2};
    Sinal* s = new Sinal(sequencia, 2);
    double* d = s->getSequencia();
    int c = s->getComprimento();
    s->imprimir("a");
    delete s;
}