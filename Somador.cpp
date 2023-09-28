#include <iostream>
#include "Sinal.h"
#include "Somador.h"
using namespace std;

Somador::Somador() {
}

Somador::~Somador() {
}

Sinal*Somador::processar(Sinal *sinalIN1, Sinal *sinalIN2) {
    double *s1=sinalIN1->getSequencia();
    double *s2=sinalIN2->getSequencia();
    double *s3;
    if (sinalIN1->getComprimento()>sinalIN2->getComprimento()) {
        for(int i=0; i<sinalIN2->getComprimento();i++) {
            s3[i]=s1[i]+s2[i];
        }
        Sinal *SinalDeSaida= new Sinal(s3,sinalIN2->getComprimento());
    }

    else if(sinalIN1->getComprimento() < sinalIN2->getComprimento()) {
        for(int i=0; i<sinalIN1->getComprimento();i++) {
            s3[i]=s1[i]+s2[i];
        }
        Sinal *SinalDeSaida= new Sinal(s3,sinalIN1->getComprimento());
    }
    else {
        for(int i=0; i<sinalIN1->getComprimento();i++) {
            s3[i]=s1[i]+s2[i];
        }
        Sinal *SinalDeSaida= new Sinal(s3,sinalIN1->getComprimento());
    }


    
}
