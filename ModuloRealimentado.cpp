#include "ModuloRealimentado.h"
#include "Somador.h"
#include "Piloto.h"

ModuloRealimentado::ModuloRealimentado(double ganho){
    this->ganho = ganho;
}

Sinal* ModuloRealimentado::processar(Sinal* sinalIN){
    Sinal* saida = nullptr;
    Sinal* diferenca = nullptr;
    Sinal* saidaInvertida = nullptr;

    double* sequenciaSaidaInvertida = new double[sinalIN->getComprimento()];    
    const double vInicial = 0;

    Amplificador* inversor = new Amplificador(-1);
    Somador* sum = new Somador();
    Piloto* Pilot = new Piloto(ganho);

    sequenciaSaidaInvertida[0] = 0;
    diferenca = new Sinal(sinalIN->getSequencia(), 1);
    saida = Pilot->processar(diferenca);
    delete diferenca;

    for(int i = 1; i < 4; i++){
        inversor->processar(saida);
        sequenciaSaidaInvertida[i] = saida->getSequencia()[i-1];
        saidaInvertida = new Sinal(sequenciaSaidaInvertida, i+1);
        diferenca = sum->processar(sinalIN, saidaInvertida);
        diferenca = new Sinal(diferenca->getSequencia(), i+1);
        delete saida;
        // cout << saida->getSequencia()[i-1] << endl;
        saida = Pilot->processar(diferenca);
        delete saidaInvertida;
        delete diferenca;
    }
    delete[] sequenciaSaidaInvertida;

    // for(int i = 0; i < sinalIN->getComprimento(); i++){
    //     cout << saida->getSequencia()[i] << endl;
    // }
    return saida;
}

ModuloRealimentado::~ModuloRealimentado(){
}
