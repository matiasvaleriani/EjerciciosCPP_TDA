/*
 * IndicadorDeCanal.cpp
 *
 *  Created on: 29/09/2022
 *      Author: algo2
 */

#include "IndicadorDeCanal.h"

IndicadorDeCanal::IndicadorDeCanal(int canalMinimo, int canalMaximo){
	this->canalMinimo = canalMinimo;
	this->canalMaximo = canalMaximo;
	this->canalActual = canalMinimo;
}

void IndicadorDeCanal::establecerCanalActual(int canalActual){
	if((canalActual >= canalMinimo) && (canalActual <= canalMaximo)){
		this->canalActual = canalActual;
	}
}

int IndicadorDeCanal::getCanalActual(){
	return this->canalActual;
}

void IndicadorDeCanal::aumentarCanalActual(){
	if(this->canalActual < canalMaximo){
		this->canalActual++;
	}
}

void IndicadorDeCanal::decrementarCanalActual(){
	if(this->canalActual > canalMinimo){
		this->canalActual--;
	}
}
