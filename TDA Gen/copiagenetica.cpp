/*
 * copiagenetica.cpp
 *
 *  Created on: 02/11/2022
 *      Author: algo2
 */


#include "Genetica.h"

Genetica::Genetica() {
	this->genes = new Vector<Gen *>(3, 0);
	for(int i = 1; i <= 3; i++) {
		this->genes->agregar(i, 0); //symbol 'NULL' could not be resolved (?
	}

	int cargaRandom = rand()%(255-0 + 1) + 0;
	this->genes->agregar(1, new Gen(cargaRandom, Red));

	int cargaRandom2 = rand()%(255-0 + 1) + 0;
	this->genes->agregar(2, new Gen(cargaRandom2, Green));

	int cargaRandom3 = rand()%(255-0 + 1) + 0;
	this->genes->agregar(3, new Gen(cargaRandom3, Blue));


	/*
	this->genes->agregar(1, new Gen(Red));
	this->genes->agregar(2, new Gen(Green));
	this->genes->agregar(3, new Gen(Blue));
*/
}

Genetica::Genetica(unsigned int cargaDeGen1, unsigned int cargaDeGen2, unsigned int cargaDeGen3) {
	this->genes = new Vector<Gen *>(3, 0);
	for(int i = 1; i <= 3; i++) {
		this->genes->agregar(i, 0); //symbol 'NULL' could not be resolved (?
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
	delete this->genes;
}

void Genetica::getGenesTotales(Celula * celula){
	Genetica * geneticaAux = new Genetica(0, 0, 0);
	int acumuladorGen1 = 0, acumuladorGen2 = 0, acumuladorGen3 = 0, cantidadDeCelulas = 0, mayorGen2 = 0, menorGen3 = 256;
	for (int i = 0; i < getCantidadDeVecinos(); i++){
		acumuladorGen1 += celula->recorrerVecinos(i)->getCargaDeGen(1);
		//acumuladorGen2 += celula->recorrerVecinos(i)->getCargaDeGen(2);
		if(celula->recorrerVecinos(i)->getCargaDeGen(2) > mayorGen2){
			mayorGen2 = celula->recorrerVecinos(i)->getCargaDeGen(2);
		}
		//cumuladorGen3 += celula->recorrerVecinos(i)->getCargaDeGen(3);
		if(celula->recorrerVecinos(i)->getCargaDeGen(3) < menorGen3){
			menorGen3 = celula->recorrerVecinos(i)->getCargaDeGen(3);
		}
		cantidadDeCelulas ++;
	}
	unsigned int promedio = (acumuladorGen1 / cantidadDeCelulas);

	//celula->recorrerVecino(i)->getGenetica()->getCargaDeGen(2)


	geneticaAux->setCargaDeGen(1, promedio);
	geneticaAux->setCargaDeGen(2, mayorGen2);
	geneticaAux->setCargaDeGen(3, menorGen3);

	/*
	 Dudas:

	 Necesito una funcion que recorra los vecinos de una celula

	 En donde guardo la genetica Auxiliar en la que tiene cada gen con una funcion
	 especifica en base a los vecinos de la celula dada?

	 */
}
