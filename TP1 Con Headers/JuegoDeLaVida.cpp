/*
 * JuegoDeLaVida.cpp
 *
 *  Created on: 06/09/2022
 *      Author: algo2
 */

#include<iostream>
using namespace std;

#include "JuegoDeLaVida.h"

void ingresoCelulasVivas(Tablero T){
	char band = 's', opcion;
	int fila,columna, contador = 0;
	while ((band == 's') || (band == 'S')){
		cout<<"Ingrese el casillero a colocar la celula viva [i][j]: ";cin>>fila>>columna;
		cout<<"\n";
		fila--;  //fila-- y columna-- es para poder asignar (tal como se pide) la primera posicion (1,1), aunque interiormente corresponde a (0,0)
		columna--;
		//para evitar errores de asignacion de numeros en posiciones fuera de la matriz
		if((fila >= 0) && (fila <= 20) && (columna >= 0 ) && (columna <= 80)){
			T[fila][columna] = 1;
			contador++;
		}

		cout<<"Desea seguir llenando casilleros? (s/n): ";cin>>opcion;
		cout<<"\n";
		band = opcion;
		if(contador == 1600){
			cout<<"Se llego al maximo de ingreso de celulas"<<endl<<endl;
			band = 'n';
		}
	}
}

void Estadisticas(Tablero T, Tablero R){
	int celVivas=0, celMuertas=0, contadorIguales = 0;
	for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++) {
        	if(T[i][j] == R[i][j]){
        		contadorIguales++;
			}
        	if ((T[i][j] == 0) && (R[i][j] == 1)){
        		celVivas++;
			}
            if ((T[i][j] == 1) && (R[i][j] == 0)){
        		celMuertas++;
			}
		}
   	}
   	if(contadorIguales == 1600){
   		cout<<"El juego se mantuvo congelado en el ultimo turno."<<endl;
	}

	cout<<"La cantidad de celulas que nacieron en el ultimo turno es: "<<celVivas<<endl;
	cout<<"La cantidad de celulas que murieron en el ultimo turno es: "<<celMuertas<<endl;
}

void calcularPromedios(float contadorNac, float contadorMuert, float contTurnos){
	float promNac = 0, promMuert = 0;
	promNac = contadorNac / contTurnos;
	promMuert = contadorMuert / contTurnos;
	cout<<"El promedio de nacimientos a lo largo del juego es: "<<promNac<<endl;
	cout<<"El promedio de muertes a lo largo del juego es: "<<promMuert<<endl;
}



