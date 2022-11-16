/*
 * Libro.h
 *
 *  Created on: 30/09/2022
 *      Author: algo2
 */

#ifndef LIBRO_H_
#define LIBRO_H_

/*
Ejercicio 3
Diseñar la especificación e implementar el TDA IndicadorDePagina de un libro.
Debe proveer operaciones para:
• crear el IndicadorDePagina con la cantidad de páginas que tiene el libro.
• devolver la página actual.
• devolver la cantidad de páginas totales.
• pasar a la página siguiente.
• pasar a la página anterior.
*/

class Libro {

	private:
		int paginasTotales;
		int paginaActual;

	public:

		/*
		 * pre : no tiene.
		 * post: se crea un libro con la cantidad de paginas establecidas.
		 */
		Libro(int paginasTotales);

		/*
		 * pre : el libro es creado.
		 * post: retorna la pagina actual.
		 */
		int getPaginaActual();

		/*
		 * pre : el libro es creado.
		 * post: retorna la cantidad de paginas totales.
		 */
		int getPaginasTotales();

		/*
		 * pre : no tiene.
		 * post: se pasa a la pagina siguiente.
		 */
		void aumentarPagina();

		/*
		 * pre : no tiene.
		 * post: se pasa a la pagina anterior.
		 */
		void decrementarPagina();

};



#endif /* LIBRO_H_ */
