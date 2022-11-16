/*
 * main.cpp
 *
 *  Created on: 29/09/2022
 *      Author: algo2
 */

#include <iostream>
#include "IndicadorDeCanal.h"

using namespace std;

int main() {

	cout << ".:: Canal ::." << endl;

	IndicadorDeCanal canal(1, 10);

	char opcion;

	do {

		cout << "Comando? (C: Establecer canal, A: aumentar canal, D: decrementar canal, R: retorna canal, X: terminar): ";
		cin >> opcion;
		opcion = toupper(opcion);

		switch (opcion) {

			case 'C' : int canalActual;
				cout<<"Ingrese el canal: "<<endl;
				cin>>canalActual;
				canal.establecerCanalActual(canalActual);
				break;

			case 'A' : canal.aumentarCanalActual();
				break;

			case 'D' : canal.decrementarCanalActual();
				break;

			case 'R' :
				cout<<"El canal actual es: "<<canal.getCanalActual()<<endl;
				break;

			default:
				opcion = 'X';
		}

	} while (opcion != 'X');

	return 0;
}


