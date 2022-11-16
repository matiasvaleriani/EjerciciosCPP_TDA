/*
 * Libro.cpp
 *
 *  Created on: 30/09/2022
 *      Author: algo2
 */

/*
 * IndicadorDeCanal.cpp
 *
 *  Created on: 29/09/2022
 *      Author: algo2
 */

#include "Libro.h"

Libro::Libro(int paginasTotales){
	this->paginasTotales = paginasTotales;
	this->paginaActual = 0;
}

int Libro::getPaginaActual(){
	return this->paginaActual;
}

int Libro:: getPaginasTotales(){
	return this->paginasTotales;
}

void Libro::aumentarPagina(){
	if(this->paginaActual < paginasTotales){
		this->paginaActual++;
	}
}

void Libro::decrementarPagina(){
	if(this->paginaActual > 0){
		this->paginaActual--;
	}
}


