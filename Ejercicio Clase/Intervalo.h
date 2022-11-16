/*
 * Intervalo.h
 *
 *  Created on: 06/10/2022
 *      Author: algo2
 */

#ifndef INTERVALO_H_
#define INTERVALO_H_

class Intervalo {

	private:

		double limiteInf;
		double limiteSup;
		bool esAbierto;

	public:

		Intervalo(double , double , bool );

		double getLimiteInf();

		double getLimiteSup();

		void setLimiteInf(double);

		void setLimiteSup(double);

		double longIntervalo();

		bool perteneceIntervalo(double );

		bool intervaloPertenece(Intervalo);
};





#endif /* INTERVALO_H_ */
