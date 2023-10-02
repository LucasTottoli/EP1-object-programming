#ifndef SINAL_H
#define SINAL_H

#include <iostream>

using namespace std;

class Sinal{
private:
    string nomeDoSinal;
    double* sequencia;
    double* guardasequencia;
    int comprimento;

public:
    Sinal(double* sequencia, int comprimento);
    virtual ~Sinal();
    double* getSequencia();
    int getComprimento();
    void imprimir(string nomeDoSinal);
};

#endif