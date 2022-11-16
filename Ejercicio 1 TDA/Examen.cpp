/*
 * Examen.cpp
 *
 *  Created on: 29/09/2022
 *      Author: algo2
 */
#include "Examen.h"

Examen::Examen(std::string nombreAlumno){
	this->nombreAlumno = nombreAlumno;
	this->notaAlumno = 0;
}

void Examen::calificarAlumno(int notaAlumno){
	if ((this->notaAlumno >= 0) && (notaAlumno <= 10)){
		this->notaAlumno = notaAlumno;
	}
}

int Examen::obtenerNota(){
	return this->notaAlumno;
}

void Examen::reCalificaAlumno(int notaAlumno){
	if ((this->notaAlumno < notaAlumno) && (notaAlumno <= 10)){
		this->notaAlumno = notaAlumno;
	}
}
