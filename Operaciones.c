/*
 * Operaciones.c
 *
 *  Created on: 8 abr. 2019
 *      Author: lavin
 */

#include <stdio.h>

int busquedaEstanteriaVacia (char x[3][3][3], int n_E, int n_F, int n_C /*char nombre[]*/){
	int a, b, c;
	a =0;
	b=0;
	c=0;
	for (int var = 0; var < n_E; ++var) {
		for (int ar = 0; ar < n_F; ++ar) {
			for (int r = 0; r < n_C; ++r) {
				if(x[n_E][n_F][n_C]== "NULL"){
					a=var;
					b=ar;
					c=r;
					break;
				}
			}
		}
	}
	return a, b, c;
}
void almacenar (char *x[3][3][3], int n_E, int n_F, int n_C, char nombre[] ){
	x[n_E][n_F][n_C]=nombre;
}
char * cargar (char *x[3][3][3], int n_E, int n_F, int n_C){
	char nombre;
	nombre = x[n_E][n_F][n_C];
	return nombre;
}
int buscarProducto (char x[3][3][3], char *nombre,  int n_E, int n_F, int n_C){
	int a =0, b=0, c=0;
	for (int var = 0; var < n_E; ++var) {
			for (int ar = 0; ar < n_F; ++ar) {
				for (int r = 0; r < n_C; ++r) {
					if(x[n_E][n_F][n_C]== nombre){
						a=var;
						b=ar;
						c=r;
						break;
					}
				}
			}
		}
	return a, b, c;
}
