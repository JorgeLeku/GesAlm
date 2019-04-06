/*
 * main.c
 *
 *  Created on: 12 mar. 2019
 *      Author: Leku
 */

//p1
//
#include <stdio.h>
int main() {

	int menu,categoria, tipo;


	printf("Elige una de estas opciones: \n");
	printf("1. Localizar lote \n");
	printf("2. Almacenar lote \n");
	printf("3. Vender lote \n");
	printf("4. Administración \n");

	scanf("%i", &menu);

	if(menu == 1){
		printf("Elige la categoría del lote que busca: \n");
		printf("1. OLLAS A PRESION \n");
		printf("2. SARTENES \n")
		printf("3. MOLDES \n");
		printf("4. PINZAS \n");
		printf("5. HIGIENE \n");
		printf("6. BATERIAS DE COCINA \n");
		printf("7. PAELLERAS \n");
		printf("8. CUCHILLOS \n");
		printf("9. CUBIERTOS \n");
		printf("10. CAFETERIA \n");

		scanf("%i", &categoria);

		if(categoria == 1){
			printf("Elige el tipo de olla \n");
			printf("1. MASTER \n");
			printf("2. CHEF \n");
			printf("3. CHEF LUXE \n");
			printf("4. ROBUST \n");
			printf("5. CLASSIC \n");
			printf("6. PRO-CLASSIC \n");

			scanf("%i", &tipo);

			while(tipo > 6){
				printf("En esta categoría no existe ese tipo \n");
			}
			if(tipo == 1){
				printf("Se encuentra en la estateria A.1.1 \n");
			if(tipo == 2){
				printf("Se encuentra en la estateria A.1.2 \n");
			}
			if(tipo == 3){
							printf("Se encuentra en la estateria A.1.3 \n");
						}
			if(tipo == 4){
							printf("Se encuentra en la estateria A.2.1 \n");
						}
			if(tipo == 5){
							printf("Se encuentra en la estateria A.2.2 \n");
						}
			if(tipo == 6){
							printf("Se encuentra en la estateria A.2.3 \n");
						}

			}

		}
		if(categoria == 2){
					printf("Elige el tipo de sartén \n");
					printf("1. TRIMETAL \n");
					printf("2. CHEF INOX \n");
					printf("3. CHEF TRICAPA \n");
					printf("4. ROBUST \n");
					printf("5. FERRUM \n");
					printf("6. ALUMINIO \n");
					printf("7. GRILL \n");
					printf("8. HOME \n");

					scanf("%i", &tipo);

					while(tipo > 8){
						printf("En esta categoría no existe ese tipo \n");
					}
					if(tipo == 1){
						printf("Se encuentra en la estateria B.1.1 \n");
					if(tipo == 2){
						printf("Se encuentra en la estateria B.1.2 \n");
					}
					if(tipo == 3){
									printf("Se encuentra en la estateria B.1.3 \n");
								}
					if(tipo == 4){
									printf("Se encuentra en la estateria B.2.1 \n");
								}
					if(tipo == 5){
									printf("Se encuentra en la estateria B.2.2 \n");
								}
					if(tipo == 6){
									printf("Se encuentra en la estateria B.2.3 \n");
								}
					if(tipo == 7){
						printf("Se encuentra en la estanteria B.3.1 \n");
					}
					if(tipo ==8){
						printf("Se encuentra en la estanteria B.3..2 \n");
					}

					}

		}

		if(categoria == 3){
					printf("Elige el tipo de molde \n");
					printf("1. ALUMINIO \n");
					printf("2. ACERO \n");
					printf("3. SILICONA \n");
					printf("4. BOMBOM POLYSTYRENO \n");

					scanf("%i", &tipo);

					while(tipo > 4){
						printf("En esta categoría no existe ese tipo \n");
					}
					if(tipo == 1){
						printf("Se encuentra en la estateria C.1.1 \n");
					if(tipo == 2){
						printf("Se encuentra en la estateria C.1.2 \n");
					}
					if(tipo == 3){
									printf("Se encuentra en la estateria C.1.3 \n");
								}
					if(tipo == 4){
									printf("Se encuentra en la estateria C.2.1 \n");
					}

					}
		}

		if(categoria == 4){
			printf("Elige el tipo de pinzas \n");
			printf("1. HIELO \n");
			printf("2. REPOSTERIA \n");
			printf("3. ENSALADA \n");
			printf("4. MADERA \n");
			printf("5. ACRILICAS \n");


				scanf("%i", &tipo);

					while(tipo > 5){
							printf("En esta categoría no existe ese tipo \n");
							}
						if(tipo == 1){
							printf("Se encuentra en la estateria D.1.1 \n");
						if(tipo == 2){
							printf("Se encuentra en la estateria D.1.2 \n");
							}
						if(tipo == 3){
							printf("Se encuentra en la estateria D.1.3 \n");
										}
						if(tipo == 4){
							printf("Se encuentra en la estateria D.2.1 \n");
										}
						if(tipo == 5){
							printf("Se encuentra en la estateria D.2.2 \n");
										}


							}

				}

	}

	if(menu == 2){
		printf("Elige la categoría del lote que desea almacenar: \n");
		printf("1. OLLAS \n");
		printf("2. SARTENES \n")
		printf("3. MOLDES \n");
		printf("4. PINZAS \n");
		printf("5. HIGIENE \n");
		printf("6. BATERIAS DE COCINA \n");
		printf("7. PAELLERAS \n");
		printf("8. CUCHILLOS \n");
		printf("9. CUBIERTOS \n");
		printf("10. CAFETERIA \n");


	}

	if(menu == 3){
		printf("Elige la categoría del lote que desea vender: \n");
		printf("1. OLLAS \n");
		printf("2. SARTENES \n")
		printf("3. MOLDES \n");
		printf("4. PINZAS \n");
		printf("5. HIGIENE \n");
		printf("6. BATERIAS DE COCINA \n");
		printf("7. PAELLERAS \n");
		printf("8. CUCHILLOS \n");
		printf("9. CUBIERTOS \n");
		printf("10. CAFETERIA \n");
	}
	if(menu == 4){
		printf("Hola gerente, introduzca su contraseña: \n")
	}


return 0;
}

