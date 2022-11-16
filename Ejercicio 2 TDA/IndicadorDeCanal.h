/*
 * IndicadorDeCanal.h
 *
 *  Created on: 29/09/2022
 *      Author: algo2
 */

#ifndef INDICADORDECANAL_H_
#define INDICADORDECANAL_H_

/*
Ejercicio 2
Diseñar la especificación e implementar el TDA IndicadorDeCanal. Debe
proveer operaciones para:
• crear el IndicadorDeCanal recibiendo como parámetro el canal mínimo y el
canal máximo.
• devolver el número de canal actual.
• cambiar el canal actual por uno recibido como parámetro.
• cambiar el canal actual por el siguiente al actual (+).
• cambia el canal actual por el anterior al actual (-).
 */
class IndicadorDeCanal {

	private:
		int canalMinimo;
		int canalMaximo;
		int canalActual;

	public:

		/*
		 * pre : no tiene.
		 * post: se crea un indicador de canal con un canal minimo y uno maximo.
		 */
		IndicadorDeCanal(int canalMinimo, int canalMaximo);

		/*
		 * pre : el indicador de canal es creado.
		 * post: se establece el canal actual.
		 */
		void establecerCanalActual(int canalActual);

		/*
		 * pre : no tiene.
		 * post: retorna el canal actual.
		 */
		int getCanalActual();

		/*
		 * pre : no tiene.
		 * post: se incrementa al siguiente canal del actual.
		 */
		void aumentarCanalActual();

		/*
		 * pre : no tiene.
		 * post: se decrementa al previo canal del actual.
		 */
		void decrementarCanalActual();

};


#endif /* INDICADORDECANAL_H_ */
