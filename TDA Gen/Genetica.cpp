/*
 * Genetica.cpp
 *
 *  Created on: 22/10/2022
 *      Author: algo2
 */

#include "Genetica.h"

Genetica::Genetica() {
	this->genes = new Vector<Gen *>(3, 0);
	for(int i = 1; i <= 3; i++) {
		this->genes->agregar(i, 0);
	}

	int cargaRandom = rand()%(255-0 + 1) + 0;
	this->genes->agregar(1, new Gen(cargaRandom, Red));

	int cargaRandom2 = rand()%(255-0 + 1) + 0;
	this->genes->agregar(2, new Gen(cargaRandom2, Green));

	int cargaRandom3 = rand()%(255-0 + 1) + 0;
	this->genes->agregar(3, new Gen(cargaRandom3, Blue));
}

Genetica::Genetica(unsigned int cargaDeGen1, unsigned int cargaDeGen2, unsigned int cargaDeGen3) {
	this->genes = new Vector<Gen *>(3, 0);
	for(int i = 1; i <= 3; i++) {
		this->genes->agregar(i, 0);
	}

	this->genes->agregar(1, new Gen(cargaDeGen1, Red));
	this->genes->agregar(2, new Gen(cargaDeGen2, Green));
	this->genes->agregar(3, new Gen(cargaDeGen3, Blue));
}

void Genetica::setCargaDeGen(unsigned int numeroDeGen, unsigned int cargaDeGen){
	if((numeroDeGen >= 1) || (numeroDeGen <= 3)){
		this->genes->obtener(numeroDeGen)->setCargaDeGen(cargaDeGen);
	}
}

int Genetica::getCargaDeGen(unsigned int numeroDeGen){
	if((numeroDeGen < 1) || (numeroDeGen > 3)){
		throw "Numero de gen invalido";
	}
	return this->genes->obtener(numeroDeGen)->getCargaDeGen();
}

TipoDeGen Genetica::getTipoDeGen(unsigned int numeroDeGen){
	if((numeroDeGen < 1) || (numeroDeGen > 3)){
			throw "Numero de gen invalido";
		}
	return this->genes->obtener(numeroDeGen)->getTipoDeGen();
}

Genetica::~Genetica() {
	for(int i = 1; i <= 3; i++) {
		delete this->genes->obtener(i);
	}
	delete this->genes;
}
