/*
 * JuegoDeLaVida.h
 *
 *  Created on: 06/09/2022
 *      Author: algo2
 */

#ifndef JUEGODELAVIDA_H_
#define JUEGODELAVIDA_H_

#include "Tablero.h"

//Solicita al usuario (por unica vez al principio) el ingreso de celulas vivas en las posiciones que desee en el tablero.
void ingresoCelulasVivas(Tablero);

//Informa por pantalla la cantidad de celulas que muerieron/nacieron con respecto al ultimo turno.
//Ademas informa si el juego se congeló. Es decir si no sufrió modificaciones en los ultimos dos turnos realizados.
void Estadisticas(Tablero, Tablero);

//Calcula el promedio de nacimientos/muertes a medida que avanzan los turnos en la partida
void calcularPromedios(float , float , float);

#endif /* JUEGODELAVIDA_H_ */

