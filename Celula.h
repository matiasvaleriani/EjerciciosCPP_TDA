/*
 * Celula.h
 *
 *  Created on: 31/10/2022
 *      Author: algo2
 */
#ifndef CELULA_H
#define CELULA_H

#include "Genetica.h"
//#include "TDA GeneradorDeGenes/AdministradorDeGen.h"

enum EstadoCelula {
    Viva,
    Muerta,
};

class Celula{

private:
    EstadoCelula estado;
    Genetica * genetica;


public:

    /*
	 * pre: -
	 * pos:
	 */
    Celula();

	/*
	 * pre: maximoDeCargaGenetica es un valor 0 o positivo.
	 * pos:
	 */
    //Celula(unsigned int maximoDeCargaGenetica, EstadoCelula estado);

    /*
	 * pre: -
	 * pos: Destruye la instancia de la celula.
	 */
    virtual ~Celula();

    /*
	 * pre: -
	 * pos:
	 */
    EstadoCelula getEstadoCelula();

	/*
	 * pre: -
	 * pos: Devuelve la genetica de la celula.
	 */
	Genetica * getGenetica();

    /*
	 * pre: -
	 * pos: Cambia el estado de la celula.
	 */
    void setEstadoCelula(EstadoCelula estado);

    /*
	 * pre:
	 * pos:
	 */
	void poblacionRequeridaParaNacer(int x1);

	/*
	 * pre:
	 * pos:
	 */
	void poblacionMinimaParaSobrevivir(int x2);

	/*
	 * pre:
	 * pos:
	 */
	void poblacionMaximaParaSobrevivir(int x3);

	void poblacionRequeridaParaVivir(int x1, int x2);


};



#endif //CELULA_H
