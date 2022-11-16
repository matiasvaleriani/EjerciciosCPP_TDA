/*
 * main.cpp
 *
 *  Created on: 30/09/2022
 *      Author: algo2
 */

/*
 * main.cpp
 *
 *  Created on: 30/09/2022
 *      Author: algo2
 */

#include <iostream>
#include "Montacargas.h"

using namespace std;

int main() {

	cout << ".:: Montacargas ::." << endl;

	Montacargas monta(10);

	monta.cargar(2);
	cout<<" \n Cargando "<<monta.obtenerCarga()<<" kg"<<endl;
	cout<<" Soporta "<<monta.obtenerPesoRestanteLibre()<<" kg mas"<<endl;
	cout<<" Se descargaron "<<monta.obtenerPesoTotalCargado()<< " kg hasta ahora"<<endl;
	monta.cargar(6);
	cout<<" \n Cargando "<<monta.obtenerCarga()<<" kg"<<endl;
	cout<<" Soporta "<<monta.obtenerPesoRestanteLibre()<<" kg mas"<<endl;
	cout<<" Se descargaron "<<monta.obtenerPesoTotalCargado()<< " kg hasta ahora"<<endl;
	monta.descargar();

	cout<<" \n Cargando "<<monta.obtenerCarga()<<" kg"<<endl;
	cout<<" Ahora tiene "<<monta.obtenerCantidadDeCargas()<<" cargas encima"<<endl;
	cout<<" Se descargaron "<<monta.obtenerPesoTotalCargado()<< " kg hasta ahora"<<endl;
	return 0;
}





