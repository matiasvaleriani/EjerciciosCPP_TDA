/*
 * main.cpp
 *
 *  Created on: 30/09/2022
 *      Author: algo2
 */

#include <iostream>
#include "Libro.h"

using namespace std;

int main() {

	cout << ".:: Libro ::." << endl;

	Libro libro(6);

	char opcion;

	do {

		cout << "Comando? R: retorna pagina actual, T:retorna paginas totales";
		cout<< "\nA: aumentar pagina, D: decrementar pagina, X: terminar"<<endl;
		cin >> opcion;
		opcion = toupper(opcion);

		switch (opcion) {

			case 'R' : cout<<"Pagina actual: "<<libro.getPaginaActual()<<endl;
				break;

			case 'T' : cout<<"Paginas totales: "<<libro.getPaginasTotales()<<endl;
				break;

			case 'A' : libro.aumentarPagina();
				break;

			case 'D' : libro.decrementarPagina();
				break;

			default:
				opcion = 'X';
		}

	} while (opcion != 'X');

	return 0;
}





