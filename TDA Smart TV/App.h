/*
 * App.h
 *
 *  Created on: 03/11/2022
 *      Author: algo2
 */

#include <string>


#ifndef APP_H_
#define APP_H_

enum EstadoApp{
	"ACTIVA", "DESACTIVA"
};

enum Subtitulos{
	"ACTIVO", "DESACTIVO"
};

class App{
private:
	std::string nombre;
	bool video;
	unsigned int tamanio;
	EstadoApp estado;
	Subtitulos subtitulos;

public:
		/**
		 * pre:no se permite nombre vacio, tamano debe ser mayor a 0, se indica si una app es de video o no
		 * pos: crea una app con el nombre y tamano indicado.
		 */
		App (std::string nombre, unsigned int tamanio, bool video);


		/**
		 * pre:-
		 * pos: destruye la instancia app
		 */
		virtual ~App();

		/**
		 * pre: -
		 * pos: devuelve el nombre de la app
		 */
		std::string getNombre();


		/**
		 * pre: -
		 * pos: devuelve si es o no una app de video
		 */
		bool esVideo();

		/*
		 * pre: -
		 * pos: devuelve el tamanio de la app
		 */
		unsigned int getTamanio();

		/**
		 * pre: -
		 * pos: devuelve el estado de la app
		 */
		EstadoApp getEstadoApp();

		/**
		 * pre: la app debe estar desactivada
		 * pos: activa la app
		 */
		void activarApp();

		/**
		 * pre: la app debe estar activada
		 * pos: desactiva la app
		 */
		void desactivarApp();

		/**
		 * pre: debe ser una app de video
		 * pos: activa los subtitulos
		 */
		void activarSubtitulos();

		/**
		 * pre: deben estar activados los subtitulos
		 * pos: desactiva los subtitulos
		 */
		void desactivarSubtitulos();

		/**
		 * pre: -
		 * pos: devuelve verdadero si la app tiene subtitulos activado
		 */
		bool haySubtitulos();

		/**
		 * pre: -
		 * pos: devuelve verdadero si la app esta activa
		 */
		bool estaActiva();
};

#endif /* APP_H_ */
