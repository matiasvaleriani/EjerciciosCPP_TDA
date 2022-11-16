/*
 * Montacargas.cpp
 *
 *  Created on: 30/09/2022
 *      Author: algo2
 */

#include "Montacargas.h"

Montacargas::Montacargas(){
	this->pesoMaximo = 10;
	this->pesoActual = 0.0;
	this->pesoTotalCargado = 0.0;
	this->cantidadDeCargas = 0.0;
}

Montacargas::Montacargas(double pesoMaximo){
	if(pesoMaximo <= 0.0){
		pesoMaximo = 10.0;
	}
	this->pesoMaximo = pesoMaximo;
	this->pesoActual = 0.0;
	this->pesoTotalCargado = 0.0;
	this->cantidadDeCargas = 0.0;
}

double Montacargas::obtenerCarga(){
	return this->pesoActual;
}

double Montacargas::obtenerPesoMaximo(){
	return this->pesoMaximo;
}

double Montacargas::obtenerCantidadDeCargas(){
	return this->cantidadDeCargas;
}

void Montacargas::cargar(double carga){
	if(carga <= obtenerPesoRestanteLibre()){
		this->pesoActual += carga;
		this->cantidadDeCargas++;
		}
	}

double Montacargas::obtenerPesoRestanteLibre(){
	return (this->obtenerPesoMaximo() - this->obtenerCarga());
}

void Montacargas::descargar(){
	if(!estaCargado()){
		throw "No hay nada para descargar";
	}
	this->pesoTotalCargado += this->obtenerCarga();
	this->pesoActual = 0.0;
	//this->pesoTotalCargado = 0.0;
	}

double Montacargas::obtenerPesoTotalCargado(){
	return (this->pesoTotalCargado);
}

bool Montacargas::estaCargado(){
	return (this->pesoActual > 0);
}
