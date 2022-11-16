/*
 * Montacargas.h
 *
 *  Created on: 30/09/2022
 *      Author: algo2
 */

#ifndef MONTACARGAS_H_
#define MONTACARGAS_H_

class Montacargas {

	private:
		double pesoMaximo;
		double pesoActual;
		double pesoTotalCargado;
		int cantidadDeCargas;

	public:

		/*
		 * pre : -.
		 * post: se crea un montacargas.
		 */
		Montacargas();

		Montacargas(double pesoMaximo);

		/*
		 * pre : -.
		 * post: devuelve la carga actual en kg.
		 */
		double obtenerCarga();

		/*
		 * pre : que la carga no supere el peso restante libre.
		 * post: carga el parametro al montacarga hasta el peso maximo
		 * y devuelve el valor cargado.
		 */
		void cargar(double);

		/*
		 * pre : -.
		 * post: devuelve el peso restante que se puede cargar en kg
		 */
		double obtenerPesoRestanteLibre();

		/*
		 * pre : -.
		 * post: devuelve la carga en kg o 0kg si esta vacio.		 */
		void descargar();

		/*
		 * pre : -.
		 * post: devuelve verdadero si tiene carga.		 */
		bool estaCargado();

		/*
		 * pre : -.
		 * post: devuelve el promedio de cargas a 0 sino hubo cargas.		 */
		//double obtenerCargaPromedio();

		double obtenerCantidadDeCargas();

		double obtenerPesoMaximo();

		double obtenerPesoTotalCargado();
};



#endif /* MONTACARGAS_H_ */
