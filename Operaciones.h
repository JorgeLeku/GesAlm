/*
 * Operaciones.h
 *
 *  Created on: 8 abr. 2019
 *      Author: lavin
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_


int busquedaEstanteriaVacia (char x[3][3][3], int n_E, int n_F, int n_C /*char nombre[]*/);
void almacenar (char *x[3][3][3], int n_E, int n_F, int n_C, char nombre[] );
char * cargar (char *x[3][3][3], int n_E, int n_F, int n_C);
int buscarProducto (char x[3][3][3], char *nombre,  int n_E, int n_F, int n_C);
#endif /* OPERACIONES_H_ */
