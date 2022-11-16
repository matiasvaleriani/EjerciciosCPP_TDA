/*
 * main.cpp
 *
 *  Created on: 06/09/2022
 *      Author: algo2
 */

#include<iostream>
using namespace std;

#include "Tablero.h"
#include "JuegoDeLaVida.h"

int main(){
	cout<<"\n\tJUEGO DE LA VIDA"<<endl;
	cout<<"Casilleros con '0' son celulas muertas, casilleros con '1' son celulas vivas "<<endl<<endl;
	Tablero T, R;
	int celActuales = 0, opcion;
	float contadorTurnos = 0, contCelV = 0, contCelM = 0;

	inicializaTablero(T);
	inicializaTablero(R);
	ingresoCelulasVivas(T);
	cout<<"\n\t\tTablero en estado inicial";
    muestraTablero(T);
    celActuales = muestraCelulasVivas(T);
    cout<<"La cantidad de celulas vivas es: "<<celActuales<<endl;

	do{
		cout<<"\n\tMENU"<<endl;
		cout<<"1. Ejecutar un turno"<<endl;
		cout<<"2. Reiniciar el juego"<<endl;
		cout<<"3. Terminar"<<endl;
		cout<<"Opcion: ";cin>>opcion;

		if(opcion == 1){
			compruebaVecinos(T, R);
    		contadorTurnos++;
			cout<<"\n\n\n\t\tTurno numero: "<<contadorTurnos;
			muestraTablero(R);
			celActuales = muestraCelulasVivas(R);
			cout<<"La cantidad de celulas vivas es: "<<celActuales<<endl;
			Estadisticas(T, R);
			contCelV = contadorNacimientos(T, R, contCelV);
			contCelM = contadorMuertes(T, R, contCelM);
			calcularPromedios(contCelV, contCelM, contadorTurnos);
			inicializaTablero(T);
			copiaTablero(R,T);
			cout<<"\n";
		}
	}while(opcion == 1);

	if(opcion == 2){
		main();
	}
}


