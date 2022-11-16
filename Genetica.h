/*
 * Genetica.h
 *
 *  Created on: 22/10/2022
 *      Author: algo2
 */

#ifndef GENETICA_H_
#define GENETICA_H_

#include "Gen.h"
#include "Vector.h"
#include "Celula.h"
#include <cstdlib> //para el rand

class Genetica {

private:
	Vector<Gen *> * genes;

public:
	/**
	 * pre:
	 * pos: crea una genetica con 3 genes, y cada gen tendra un valor aleatorio entre 0-255.
	 */
	Genetica();

	/**
	 * pre: la carga de cada gen debe estar entre el rango 0 y 255
	 * pos: crea una genetica con 3 genes.
	 */
	Genetica(unsigned int cargaDeGen1, unsigned int cargaDeGen2, unsigned int cargaDeGen3);

	/**
	 * pre: -
	 * pos: elimina la memoria de los genes utilizados
	 */
	virtual ~Genetica();

	/**
	 * pre: -
	 * pos: Establece la carga de gen en el gen indicado
	 */
	void setCargaDeGen(unsigned int numeroDeGen, unsigned int cargaDeGen);

	/**
	 * pre: -
	 * pos: Devuelve la carga de gen del gen indicado
	 */
	int getCargaDeGen(unsigned int numeroDeGen);

	/**
	 * pre: -
	 * pos: Devuelve el tipo de gen del gen indicado
	 */
	TipoDeGen getTipoDeGen(unsigned int numeroDeGen);

};



#endif /* GENETICA_H_ */


