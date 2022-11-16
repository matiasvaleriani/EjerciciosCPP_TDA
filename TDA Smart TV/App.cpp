/*
 * App.cpp
 *
 *  Created on: 03/11/2022
 *      Author: algo2
 */

#include <iostream>
#include "App.h"

		App::App (std::string nombre, unsigned int tamanio, bool video){
			if (nombre == "") {
				throw "El nombre no puede ser una cadena vacia";
			}

			if (tamanio <= 0) {
				throw "El tamanio debe ser mayor a 0";
			}
			this->nombre = nombre;
			this->tamanio = tamanio;
			this->video = video;
			this->estado = "DESACTIVA";
			this->subtitulos = "DESACTIVO";
		}

		virtual App::~App(){}


		std::string App::getNombre(){
			return this->nombre;
		}

		bool App::esVideo(){
			return this->video == true;
		}


		unsigned int App::getTamanio(){
			return this->tamanio;
		}

		EstadoApp App::getEstadoApp(){
			return this->estado;
		}


		void App::activarApp(){
			if(!estaActiva()){
				this->estado = "ACTIVA";
			}
		}

		void App::desactivarApp(){
			if(estaActiva()){
				this->estado = "DESACTIVA";
			}
		}


		void App::activarSubtitulos(){
			if(video == true){
				this->subtitulos == "ACTIVO";
			}
		}

		void App::desactivarSubtitulos(){
			if(haySubtitulos()){
				this->subtitulos == "DESACTIVO";
			}
		}

		bool App::haySubtitulos(){
			return this->subtitulos == "ACTIVO";
		}

		bool App::estaActiva(){
			return this->estado == "ACTIVA";
		}
