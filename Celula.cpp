/*
 * Celula.cpp
 *
 *  Created on: 31/10/2022
 *      Author: algo2
 */
#include "Celula.h"


Celula::Celula() {
    this->estado = Muerta;
    this->genetica = new Genetica();
}
/*
Celula::Celula(unsigned int maximoDeCargaGenetica, EstadoCelula estado){
    if (maximoDeCargaGenetica < 0){
        throw "El maximo de carga genetica debe ser mayor a 0";
    }
    this->gen = new Gen(maximoDeCargaGenetica);
    this->estado = Muerta;

}*/

Celula::~Celula() {}

EstadoCelula Celula::getEstadoCelula(){
    return this->estado;
}

Genetica * Celula::getGenetica(){
    return this->genetica;
}

void Celula::setEstadoCelula(EstadoCelula estado) {
    this->estado = estado;
}

int celulasVivasEncontradas();

void Celula::poblacionRequeridaParaNacer(int x1){

}


void Celula::poblacionMinimaParaSobrevivir(int x2){

}


void Celula::poblacionMaximaParaSobrevivir(int x3){

}

void Celula::poblacionRequeridaParaVivir(int x1, int x2){
    int celulasVivas = celulasVivasEncontradas();
    if(estado == Muerta && celulasVivas == x1){
        setEstadoCelula(Viva);
    }
    if(estado == Viva && celulasVivas < x2){
        setEstadoCelula(Muerta);
    }
}
