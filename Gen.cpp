/*
 * Gen.cpp
 *
 *  Created on: 22/10/2022
 *      Author: algo2
 */

#include "Gen.h"

Gen::Gen(TipoDeGen tipo) {
	this->cargaDeGen = 0;
	if((tipo == Red) || (tipo == Green) || (tipo == Blue)){
		this->tipo = tipo;
	}else{
		throw "El tipo de gen no es valido";
	}
}

Gen::Gen(unsigned int cargaDeGen, TipoDeGen tipo) {
	verificar(cargaDeGen);
	this->cargaDeGen = cargaDeGen;
	if((tipo == Red) || (tipo == Green) || (tipo == Blue)){
		this->tipo = tipo;
	}else{
		throw "El tipo de gen no es valido";
	}
}

Gen::~Gen() {}


unsigned int Gen::getCargaDeGen() {
	return this->cargaDeGen;
}

TipoDeGen Gen::getTipoDeGen(){
	return this->tipo;
}

void Gen::setCargaDeGen(unsigned int cargaDeGen){
	verificar(cargaDeGen);
	this->cargaDeGen = cargaDeGen;
}

void Gen::verificar(unsigned int cargaGentica) {
	if ((cargaGentica < 0 ) || cargaGentica > 255 ) {
		throw "El valor de la carga de gen no respeta los rangos";
	}
}
