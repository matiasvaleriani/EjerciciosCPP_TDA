/*
 * main.cpp
 *
 *  Created on: 06/10/2022
 *      Author: algo2
 */

#include <iostream>
#include "Intervalo.h"

using namespace std;

int main() {

	cout << ".:: Intervalo ::." << endl;
	bool abierto = true;
	Intervalo recta(1, 5, abierto);
	Intervalo recta2(2, 4, abierto);


	cout<<"El limite inferior del primer intervalo es "<<recta.getLimiteInf()<<endl;
	cout<<"El limite superior del primer intervalo es "<<recta.getLimiteSup()<<endl;
	cout<<"La longitud del primer intervalo es "<<recta.longIntervalo()<<endl;
	recta.setLimiteInf(2);
	recta.setLimiteSup(9);
	cout<<"\nEl limite inferior del primer intervalo es "<<recta.getLimiteInf()<<endl;
	cout<<"El limite superior del primer intervalo es "<<recta.getLimiteSup()<<endl;
	cout<<"La longitud del primer intervalo es "<<recta.longIntervalo()<<endl;


	if(recta.perteneceIntervalo(4)){
		cout<<"El numero pertenece al intervalo"<<endl;;
	}else{
		cout<<"El numero no pertenece al intervalo"<<endl;
	}

	cout<<"\n\nEl limite inferior del segundo intervalo es "<<recta2.getLimiteInf()<<endl;
	cout<<"El limite superior del segundo intervalo es "<<recta2.getLimiteSup()<<endl;
	cout<<"La longitud del segundo intervalo es "<<recta2.longIntervalo()<<endl;
	if(recta.intervaloPertenece(recta2)){
		cout<<"El segundo intervalo esta incluido en el primer intervalo";
	}
	return 0;
}








