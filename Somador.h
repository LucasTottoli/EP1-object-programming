#include <iostream>
#include <Sinal.h>
using namespace std;

class Somador {
public:
    Somador();
    virtual ~Somador();
    Sinal *processar(Sinal*sinalIN1,Sinal *sinalIN2);
    
};