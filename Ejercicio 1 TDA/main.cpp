/*
 * main.cpp
 *
 *  Created on: 29/09/2022
 *      Author: algo2
 */

#include <iostream>
#include "Examen.h"

using namespace std;

int main() {

	cout << ".:: Examen ::." << endl;

	Examen examen("Matias");

	char opcion;
	int notaAlumno;
	cout<<"Ingrese la nota para calificar: ";
	cin>>notaAlumno;
	examen.calificarAlumno(notaAlumno);


	do {

		cout << "Comando? (R: recalificar, O: obtener la nota, X: terminar): ";
		cin >> opcion;
		opcion = toupper(opcion);

		switch (opcion) {

			case 'R' : cout<<"Ingrese la nota para recalificar: "<<endl;
				cin>>notaAlumno;
				examen.calificarAlumno(notaAlumno);

				examen.reCalificaAlumno(notaAlumno);
				break;

			case 'O' : cout << "La nota del alumno es: "<<examen.obtenerNota()<<endl;

				break;

			default:
				opcion = 'X';
		}

	} while (opcion != 'X');

	return 0;
}
