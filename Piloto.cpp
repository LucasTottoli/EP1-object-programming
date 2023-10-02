#include "Piloto.h"

Piloto::Piloto(double ganho){
    this->ganho = ganho;
}

Sinal* Piloto::processar(Sinal *sinalIN){
    Amplificador* Gain = new Amplificador(ganho);
    Sinal* sinalOUT1 = new Sinal(sinalIN->getSequencia(), sinalIN->getComprimento());
    
    sinalOUT1 = Gain->processar(sinalIN);

    Integrador* Integral = new Integrador();
    Sinal* sinalOUT2 = new Sinal(sinalOUT1->getSequencia(), sinalOUT1->getComprimento());

    sinalOUT2 = Integral->processar(sinalOUT1);

    return sinalOUT2;
}

Piloto::~Piloto(){
}