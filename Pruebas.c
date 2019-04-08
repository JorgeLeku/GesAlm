/*
 * Pruebas.c
 *
 *  Created on: 7 abr. 2019
 *      Author: Leku
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

int main (){
	char b [40]= " ";
	char *a [3] [3] [3];
	int i=0;
	strcpy(a[2][2][2], "ba");
	almacenar(a, 3, 3, 0, "hola");
	printf("%s",cargar(a, 3, 3, 0));
	printf("%i %i %i \n",busquedaEstanteriaVacia(a, 3,3,3));

	//strcpy(a[2][2][2], "NULL");
	//printf("%s \n", a [2][2][2]);


	//char b [20]="ssdfdsa";
	int var, ar, r;
	for (var = 0; var < 3; ++var) {

			for (ar = 0; ar < 3; ++ar) {

				for (r = 0; r < 3; ++r) {
					//strcpy(a[var][ar][r], "NULL");
					/*if (strcmp(a[var][ar][r][0], '\0')==0) {
						printf("%s \n", a [var][ar][r]);

					}*/
				}
			}
		}


}
