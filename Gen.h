/*
 * Gen.h
 *
 *  Created on: 22/10/2022
 *      Author: algo2
 */

#ifndef GEN_H_
#define GEN_H_

enum TipoDeGen {
	Red, Green, Blue
};

class Gen {

	private:

		TipoDeGen tipo;
		unsigned int cargaDeGen;

	public:

		/**
		 * pre:
		 * pos: establece cargaDeGen en 0 y el tipo de gen en el pasado por parametro
		 */
		Gen(TipoDeGen tipo);

		/**
		 * pre:
		 * pos: deja el gen creado con cargaDeGem en cargaDeGem. Establece tipo de gen en el pasado por parametro
		 */
		Gen(unsigned int cargaDeGen, TipoDeGen tipo);

		/**
		 * pre: -
		 * pos: -
		 */
		virtual ~Gen();

		/**
		 * pre: -
		 * pos: devuelve la cargaDeGen
		 */
		unsigned int getCargaDeGen();

		/**
		 * pre: -
		 * pos: devuelve el tipo de gen
		 */
		TipoDeGen getTipoDeGen();

		/**
		 * pre: la cargaGentica debe ser un valor entre 0 y 255
		 * pos: cambia el valor de cargaGentica
		 */
		void setCargaDeGen(unsigned int cargaDeGen);


	private:
		/**
		 * pre: -
		 * pos: da error si cargaDeGen no respeta los rangos
		 */
		void verificar(unsigned int cargaDeGen);

};
#endif /* GEN_H_ */


