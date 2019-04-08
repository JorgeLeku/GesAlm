/*
 * Producto.c
 *
 *  Created on: 8 abr. 2019
 *      Author: jorge.lekuona
 */


#include "Producto.h"
#include <stdio.h>


void imprimirPunto(Producto p)
{
	printf("Id = :%s \n Nombre = %s \n Peso = %f \n Precio = %f \n Estanteria = %i \n Fila = %i \n Piso = %i \n Fecha = %i/%i/%i /n", p.id, p.nombre, p.peso, p.precio, p.estanteria, p.fila, p.piso, p.anyo, p.mes, p.dia);
}

