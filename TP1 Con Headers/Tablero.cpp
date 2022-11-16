/*
 * Tablero.cpp
 *
 *  Created on: 06/09/2022
 *      Author: algo2
 */

#include<iostream>
using namespace std;

#include "Tablero.h"

void copiaTablero(Tablero T, Tablero R){
	int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
        	R[i][j] = T[i][j];
    	}
	}
}

void inicializaTablero(Tablero T){
	int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
        	T[i][j] = 0;
    	}
	}
}

void muestraTablero(Tablero T){
	int i, j;
	cout<<"\n";
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            cout<<T[i][j];
    	}
    	cout<<endl;
	}
}

int muestraCelulasVivas(Tablero T){
	int i, j, contador = 0;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
        	if(T[i][j] == 1){
        		contador++;
			}
    	}
	}
	return contador;
}

int contadorNacimientos(Tablero T, Tablero R, int contador){
	for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++) {
        	if ((T[i][j] == 0) && (R[i][j] == 1)){
        		contador++;
			}
		}
   	}
	return contador;
}

int contadorMuertes(Tablero T, Tablero R, int contadorM){
	for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++) {
        	if ((T[i][j] == 1) && (R[i][j] == 0)){
        		contadorM++;
			}
		}
   	}
	return contadorM;
}

void compruebaVecinos(Tablero T, Tablero R){
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
        	int contador = 0, contador2 = 0;
			if(T[i][j] == 0){
				if((i-1) >= 0){
					if(T[i-1][j] == 1){
            			contador++;
					}
				}
				if((i+1) <= (ROW-1)){
					if(T[i+1][j] == 1){
            			contador++;
					}
				}
				if((j-1) >= 0){
					if(T[i][j-1] == 1){
            			contador++;
					}
				}
				if((j+1) <= (COL-1)){
					if(T[i][j+1] == 1){
            			contador++;
					}
				}
				if(((i-1) >= 0) && ((j-1) >= 0)){
					if(T[i-1][j-1] == 1){
            			contador++;
					}
				}
				if(((i-1) >= 0) && ((j+1) <= (COL-1))){
					if(T[i-1][j+1] == 1){
            			contador++;
					}
				}
				if(((i+1) <= (ROW-1)) && ((j-1) >= 0)){
        			if(T[i+1][j-1] == 1){
            			contador++;
					}
				}
				if(((i+1) <= (ROW-1)) && ((j+1) <= (COL-1))){
					if(T[i+1][j+1] == 1){
            			contador++;
					}
				}
				if(contador == 3){
    				R[i][j] = 1;
    			}else{
    				R[i][j] = 0;
				}
			}
			else if(T[i][j] == 1){
				if((i-1) >= 0){
					if(T[i-1][j] == 1){
            			contador2++;
					}
				}
				if((i+1) <= (ROW-1)){
					if(T[i+1][j] == 1){
            			contador2++;
					}
				}
				if((j-1) >= 0){
					if(T[i][j-1] == 1){
            			contador2++;
					}
				}
				if((j+1) <= (COL-1)){
					if(T[i][j+1] == 1){
            			contador2++;
					}
				}
				if(((i-1) >= 0) && ((j-1) >= 0)){
					if(T[i-1][j-1] == 1){
            			contador2++;
					}
				}
				if(((i-1) >= 0) && ((j+1) <= (COL-1))){
					if(T[i-1][j+1] == 1){
            			contador2++;
					}
				}
				if(((i+1) <= (ROW-1)) && ((j-1) >= 0)){
        			if(T[i+1][j-1] == 1){
            			contador2++;
					}
				}
				if(((i+1) <= (ROW-1)) && ((j+1) <= (COL-1))){
					if(T[i+1][j+1] == 1){
            			contador2++;
					}
				}
				if(! ((contador2 == 2) || (contador2 ==2)) ){
    				R[i][j] = 0;
				}else{
					R[i][j] = 1;
				}
			}
		}
	}
}


