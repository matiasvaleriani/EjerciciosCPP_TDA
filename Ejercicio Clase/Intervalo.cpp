/*
 * Intervalo.cpp
 *
 *  Created on: 06/10/2022
 *      Author: algo2
 */

#include "Intervalo.h"

Intervalo::Intervalo(double limiteInf, double limiteSup, bool esAbierto){
	this->limiteInf = limiteInf;
	this->limiteSup = limiteSup;
	this->esAbierto = esAbierto;
}



double Intervalo::getLimiteInf(){
	return this->limiteInf;
}

double Intervalo::getLimiteSup(){
	return this->limiteSup;
}

void Intervalo::setLimiteInf(double limiteInf){
	this->limiteInf = limiteInf;
	}

void Intervalo::setLimiteSup(double limiteSup){
	this->limiteSup = limiteSup;
	}

double Intervalo::longIntervalo(){
	int longitud = (getLimiteSup() - getLimiteInf());
	if (longitud < 0){
		longitud = longitud * -1;
	}
	return longitud;
}

bool Intervalo::perteneceIntervalo(double numero){
	bool pertenece = true;
	if (this->esAbierto == true){
		if ((numero >= this->limiteSup) || (numero <= this->limiteInf)){
			pertenece = false;
		}
	}
	if (this->esAbierto == false){
		if ((numero > this->limiteSup) || (numero < this->limiteInf)){
			pertenece = false;
		}
	}
	return pertenece;
}

bool Intervalo::intervaloPertenece(Intervalo intervalo){
	if (intervalo.esAbierto == true){
		return (intervalo.getLimiteSup()<this->limiteSup && intervalo.getLimiteInf()>this->limiteInf);
	}
	else{
		return (intervalo.getLimiteSup()<=this->limiteSup && intervalo.getLimiteInf()>=this->limiteInf);
		}
	}


