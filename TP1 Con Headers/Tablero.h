/*
 * Tablero.h
 *
 *  Created on: 06/09/2022
 *      Author: algo2
 */

#ifndef TABLERO_H_
#define TABLERO_H_

static const int ROW = 20;
static const int COL = 80;

typedef int Tablero[ROW][COL];

//Copia (celda por celda) el contenido de un tablero al otro.
void copiaTablero(Tablero, Tablero);

//Inicializa el tablero con 0 (ceros) en todas las posiciones del mismo.
//Que este en cero implica que todas las celulas estan muertas.
void inicializaTablero(Tablero);

//Imprime el tablero del juego, con la cantidad de filas y columnas definidas al principio.
void muestraTablero(Tablero);

//Recibe como parametro el tablero y devuelve (int) la cantidad de celulas vivas (celulas con 1).
int muestraCelulasVivas(Tablero);

//Recibe el tablero pre-turno y el post-turno junto al contador de nacimientos.
//Devuelve un entero (int) que representa la cantidad de celulas que nacen a lo largo de la partida.
int contadorNacimientos(Tablero, Tablero, int);

//Recibe el tablero pre-turno y el post-turno junto al contador de muertes.
//Devuelve un entero (int) que representa la cantidad de celulas que murieron a lo largo de la partida.
int contadorMuertes(Tablero, Tablero, int );

//Comprueba el numero de celulas vecinas para que (dadas las conidiciones de celulas muertas/vivas en el enunciado)
//ejecute un turno en la partida, y realice dichos cambios en el tablero post-turno.
void compruebaVecinos(Tablero, Tablero);

#endif /* TABLERO_H_ */

