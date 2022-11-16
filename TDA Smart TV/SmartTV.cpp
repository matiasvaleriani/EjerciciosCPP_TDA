/*
 * SmartTV.cpp
 *
 *  Created on: 03/11/2022
 *      Author: algo2
 */

#include "SmartTV.h"
#include <iostream>

	SmartTV::SmartTV(unsigned int tamanioMaximo, unsigned int cantidadDeApps){
		if(tamanioMaximo <= 0){
			throw "El tamanio del SmartTV no puede ser 0";
		this->tamanioMaximo = tamanioMaximo;
		}

		if(cantidadDeApps <= 0){
			throw "La cantidad de apps no puede ser 0";
		}
		this->cantidadDeApps = cantidadDeApps;

		this->actual = "";
		this->estadoInternet = "DESACTIVO";
		this->tamanioDisponible = tamanioMaximo;
		this->apps = new Vector <App *>(cantidadDeApps);
			for(int i = 1; i <= this->apps->getLongitud(); i++) {
				this->apps->agregar(i, NULL);
			}
	}

	void SmartTV::agregarApp(std::string nombreApp, unsigned int tamanio, bool video){
		if(nombreApp == ""){
			throw "El nombre de la App no puede ser una cadena vacia";
		}
		if(tamanio > this->tamanioDisponible){
			throw "No hay tamanio para agregar la App";
		}
		int i= 1;
		bool agregado = false;

		while(i< this->apps->getLongitud() && !agregado ){
			if(this->apps->obtener(i) != 0){
				if(this->apps->obtener(i)->getNombre() == nombreApp){
					throw "La app ya fue agregada";
				}else{
					this->apps->agregar(i, new App(nombreApp, tamanio, video));
				}
			}
			i++;
		}
		if(!agregado){
			throw "No se pudo agregar la app";
		}
	}

	void SmartTV::activarInternet(){
		this->estadoInternet = "CONECTADA";
	}

	void SmartTV::desactivarInternet(){
		this->estadoInternet = "DESCONECTADA";
	}

	void SmartTV::activarSubtitulos(std::string nombreApp){
		for(int i = 1; i <= this->apps->getLongitud(); i++) {
			if((this->apps->obtener(i)->getNombre() == nombreApp) && (this->apps->obtener(i)->esVideo())){
				this->apps->obtener(i)->activarSubtitulos()
			}
		}
	}

	void SmartTV::desactivarSubtitulos(std::string nombreApp){
		for(int i = 1; i <= this->apps->getLongitud(); i++) {
			if((this->apps->obtener(i)->getNombre() == nombreApp) && (this->apps->obtener(i)->esVideo())){
				this->apps->obtener(i)->desactivarSubtitulos()
			}
		}
	}

	EstadoInternet SmartTV::getEstadoInternet(){
		return this->estadoInternet;
	}

	void SmartTV::activarApp(std::string nombreApp){
		for(int i = 1; i <= this->apps->getLongitud(); i++) {
			if((this->apps->obtener(i)->getNombre() == nombreApp) && (getEstadoInternet() == "CONECTADA")){
				this->actual = this->apps->obtener(i)->getNombre();
			}
		}
	}

	std::string SmartTV::getAppActual(){
		return this->actual;
	}

	SmartTV::~SmartTV(){
		delete this->apps;
	}



