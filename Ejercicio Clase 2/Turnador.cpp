/*
 * Turnador.cpp
 *
 *  Created on: 13/10/2022
 *      Author: algo2
 */

#include "Turnador.h"

Turnador::Turnador(int turnosEspera){
	if(turnosEspera < 1){
		throw "La cantidad de turnos en espera debera ser mayor que 1";
	}
	this->mTurnosEspera = turnosEspera;
	this->turnosEspera = 0;
	this->turnoActual = 1;
	this->turnosAtendidos = 0;
	this->turnosMax = 0;
}

int Turnador::getTurnoActual(){
	return this->turnoActual;
}

void Turnador::siguienteTurno(){
	this->turnoActual++;
	this->turnosAtendidos++;
	this->turnosEspera--;
}

void Turnador::entregarTurno(){
	if(this->turnosEspera < this->mTurnosEspera){
		this->turnosEspera ++;
		if(this->turnosEspera > this->turnosMax){
			this->turnosMax=this->turnosEspera;
		}
	}
}

int Turnador::getTurnoEspera(){
	return this->turnosEspera;
}

int Turnador::getTurnosAtendidos(){
	return this->turnosAtendidos;
}

int Turnador::maxTurnosEspera(){
	return this->mTurnosEspera;
}


