/*
 * SmartTV.h
 *
 *  Created on: 03/11/2022
 *      Author: algo2
 */


/*
Diseñar la especificación e implementar el TDA Smart TV. Debe proveer operaciones para:
	• Crear un televisor con el tamaño máximo de espacio en disco (en MB).
	• Agregar una app identificada por un nombre.
	• Abrir y cerrar una App.
	• Si es una App es de videos, poder activar los subtítulos.
	• Conectar la TV a internet y desconectarla.

Reglas:
	Cada App tiene un tamaño.
	Cada App indica si se puede utilizar con o sin internet. Si no hay internet en la TV no se puede ejecutar la App
	Hacer el main utilizando el TDA.
 */

#ifndef SMARTTV_H_
#define SMARTTV_H_
#include "App.h"
#include "Vector.h"
#include <string>

enum EstadoInternet{
	"CONECTADA", "DESCONECTADA"
};

class SmartTV{
private:
	unsigned int tamanioMaximo;
	unsigned int tamanioDisponible;
	Vector <App *> * apps;
	EstadoInternet estadoInternet;
	unsigned int cantidadDeApps;
	std::string actual;

public:
	/**
	 * pre: tamanioMaximo debe ser mayor a 0
	 * pos: crea un SmartTV con la crestaurant con la cantidad de mesas indicadas.
	 */
	SmartTV(unsigned int tamanioMaximo, unsigned int cantidadDeApps);

	/**
	 * pre: la app debe existir y debe haber tamanio disponible en el SmartTV
	 * pos: se agrega la app al smart tv
	 */
	void agregarApp(std::string nombreApp, unsigned int tamanio, bool video);

	/**
	 * pre:
	 * pos: se activa internet
	 */
	void activarInternet();

	/**
	 * pre:
	 * pos: se desactiva internet
	 */
	void desactivarInternet();

	/**
	 * pre: la app debe ser de video
	 * pos: se activan subtitulos
	 */
	void activarSubtitulos(std::string nombreApp);

	/**
	 * pre: la app debe ser de video
	 * pos: se desactivan subtitulos
	 */
	void desactivarSubtitulos(std::string nombreApp);

	/**
	 * pre: la app debe existir
	 * pos: se activa la app
	 */
	void activarApp(std::string nombreApp);

	/**
	 * pre:
	 * pos: devuelve el estado del internet
	 */
	EstadoInternet getEstadoInternet();


	/**
	 * pre:
	 * pos: devuelve la app actual
	 */
	std::string getAppActual();

	/**
	 * pre:
	 * pos: elimina la instancia Smart TV.
	 */
	~SmartTV();
};



#endif /* SMARTTV_H_ */
