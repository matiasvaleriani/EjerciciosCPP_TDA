/*
 * Examen.h
 *
 *  Created on: 29/09/2022
 *      Author: algo2
 */

#ifndef EXAMEN_H_
#define EXAMEN_H_

#include<string>
/*Ejercicio 1
Diseñar la especificación e implementar el TDA Examen. Debe proveer
operaciones para:
• crear el Examen recibiendo como parámetro el nombre del alumno.
• calificar con una nota [1..10]. Solo debe ser posible calificar el Examen una
única vez.
• obtener la nota.
• revisar la nota, es decir cambiarla pero solo por una superior.
*/

class Examen {

	private:
		std::string nombreAlumno;
		int notaAlumno;

	public:

		/*
		 * pre : no tiene.
		 * post: el Examen se crea a partir del nombre del alumno
		 * para calificar con una nota de 1 a 10.
		 */
		Examen(std::string nombreAlumno);

		/*
		 * pre : el examen es creado.
		 * post: se califica la nota con nota.
		 */
		void calificarAlumno(int notaAlumno);

		/*
		 * pre : el examen tiene una calificacion.
		 * post: devuelve la nota del alumno.
		 */
		int obtenerNota();

		/*
		 * pre : el examen tiene una calificacion.
		 * post: cambia la nota del alumno por una nota superior.
		 */
		void reCalificaAlumno(int notaAlumno);


};


#endif /* EXAMEN_H_ */
