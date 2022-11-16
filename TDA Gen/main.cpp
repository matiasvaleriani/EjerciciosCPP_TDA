/*
 * main.cpp
 *
 *  Created on: 22/10/2022
 *      Author: algo2
 */
#include <iostream>
#include "Genetica.h"

int main(){
try{
		Genetica * genetica = new Genetica(20, 130, 234);

		Genetica * genetica2 = new Genetica();

		Genetica * genetica3 = new Genetica();

		genetica->setCargaDeGen(2, 12);
		//genetica2->setCargaDeGen(1, 1);

		std::cout << "GENETICA 1"<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica->getCargaDeGen(1)<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica->getCargaDeGen(2)<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica->getCargaDeGen(3)<<std::endl;

		std::cout << "-----------"<<std::endl;

		std::cout << genetica->getTipoDeGen(1)<<std::endl;
		std::cout << genetica->getTipoDeGen(2)<<std::endl;
		std::cout << genetica->getTipoDeGen(3)<<std::endl;

		std::cout << "\nGENETICA 2"<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica2->getCargaDeGen(1)<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica2->getCargaDeGen(2)<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica2->getCargaDeGen(3)<<std::endl;

		std::cout << "-----------"<<std::endl;

		std::cout << genetica2->getTipoDeGen(1) <<std::endl;
		std::cout << genetica2->getTipoDeGen(2) <<std::endl;
		std::cout << genetica2->getTipoDeGen(3) <<std::endl;

		std::cout << "\nGENETICA 3"<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica3->getCargaDeGen(1)<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica3->getCargaDeGen(2)<<std::endl;
		std::cout << "La carga del primer gen es "<<genetica3->getCargaDeGen(3)<<std::endl;

		std::cout << "-----------"<<std::endl;

		std::cout << genetica3->getTipoDeGen(1) <<std::endl;
		std::cout << genetica3->getTipoDeGen(2) <<std::endl;
		std::cout << genetica3->getTipoDeGen(3) <<std::endl;
} catch (...){

}
};


