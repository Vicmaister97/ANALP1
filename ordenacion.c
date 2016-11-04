/**
 *
 * Descripcion: Implementacion de funciones de ordenacion 
 *
 * Fichero: ordenacion.c
 * Autor: Carlos Aguirre
 * Version: 1.0
 * Fecha: 16-09-2016
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "ordenacion.h"

/***************************************************/
/* Funcion: InsertSort Fecha: 7/10/2016            */
/* Autores: Alfonso Villar y Víctor García         */
/*                                                 */
/* Entrada:   0 < ip <= iu                         */
/* int *tabla: Tabla con los numeros               */
/* int ip: Direccion del primer elemento a ordenar */
/* int iu: Direccion del ultimo elemento a ordenar */
/*                                                 */
/* Salida:                                         */
/* cont: El numero de veces que se ejecuto la OB   */
/* Salida: devuelve el numero de veces que se ha   */
/* ejecutado la OB si se ha ordenado la tabla o en */
/* caso de error devuelve ERR                      */
/***************************************************/
int InsertSort(int* tabla, int ip, int iu)
{
	int cont = 0;
	int i;
	if (tabla == NULL) return ERR;
		for (i = ip + 1; i <= iu; i++){ 
			int j = i-1;
			int aux = tabla[i];
			while (j >= ip && tabla[j] > aux){
		    		tabla[j+1] = tabla[j];
		    		j--;
		    		cont++;
		    		}
			cont++;
			tabla[j+1] = aux;
		}
	return cont;
}

/***************************************************/
/* Funcion: InsertSortInv Fecha: 7/10/2016         */
/* Autores: Alfonso Villar y Víctor García         */
/*                                                 */
/* Entrada:   0 < ip <= iu                         */
/* int *tabla: Tabla con los numeros               */
/* int ip: Direccion del primer elemento a ordenar */
/* int iu: Direccion del ultimo elemento a ordenar */
/*                                                 */
/* Salida:                                         */
/* cont: El numero de veces que se ejecuto la OB   */
/* Salida: devuelve el numero de veces que se ha   */
/* ejecutado la OB si se ha ordenado la tabla o en */
/* caso de error devuelve ERR                      */
/***************************************************/
int InsertSortInv(int* tabla, int ip, int iu)
{
	int cont = 0;
	int i;
	if (tabla == NULL) return ERR;
	for (i = ip + 1; i <= iu; i++){ 
		int j = i-1;
		int aux = tabla[i];
		while (j >= ip && tabla[j] < aux){
		    tabla[j+1] = tabla[j];
		    j--;
		    cont++;
		    }
		cont++;
		tabla[j+1] = aux;
	}
	return cont;
}