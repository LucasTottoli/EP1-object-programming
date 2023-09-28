#ifndef AMPLIFICADOR_H
#define AMPLIFICADOR_H

#include <iostream>
#include "Sinal.h"
using namespace std;

class Amplificador{
private:
    double ganho;

public:
    Amplificador(double ganho);
    virtual ~Amplificador();
    Sinal* processar(Sinal* sinalIN);
    void setGanho(double ganho);
    double getGanho();
};

#endif 
