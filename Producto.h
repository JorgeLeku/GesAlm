/*
 * Producto.h
 *
 *  Created on: 8 abr. 2019
 *      Author: jorge.lekuona
 */

#ifndef EJERCICIO_3_PRODUCTO_H_
#define EJERCICIO_3_PRODUCTO_H_

typedef struct {
	char *nombre;
	char *id;
	int estanteria;
	int fila;
	int piso;
	float precio;
	float peso;
	int anyo;
	int mes;
	int dia;
}Producto;

#endif /* EJERCICIO_3_PRODUCTO_H_ */
