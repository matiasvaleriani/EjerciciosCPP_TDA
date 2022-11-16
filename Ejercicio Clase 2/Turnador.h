/*
 * Turnador.h
 *
 *  Created on: 13/10/2022
 *      Author: algo2
 */

#ifndef TURNADOR_H_
#define TURNADOR_H_

class Turnador {

	private:

		int mTurnosEspera;
		int turnosEspera;
		int turnoActual;
		int turnosAtendidos;
		int turnosMax;

	public:
		//Pre: el maximo de turnos en espera debe ser un entero mayor a 1
		//Post: se crea una instancia nueva de un turnador, con un maixmo de turnos
		Turnador(int);


		int getTurnoActual();

		void siguienteTurno();

		void entregarTurno();

		int getTurnoEspera();

		int getTurnosAtendidos();

		int maxTurnosEspera();

};




#endif /* TURNADOR_H_ */
