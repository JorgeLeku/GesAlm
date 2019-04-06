/*
 * main.c
 *
 *  Created on: 12 mar. 2019
 *      Author: Leku
 */

//p1
//
//#include <Posicion.h>
#include <stdio.h>
int main() {


	char a [50] [50] [50] [];//el tamaño del array sera cogido de la bd
	a[1][1][1]="adfsa";
	printf("%s \n", a [1][1][1]);
	int menu;

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
		printf("2. SARTENES \n");
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
			}
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
			}
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
			}
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
			}
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

		if(categoria == 5){
			printf("Elige el tipo de higiene \n");
			printf("1. INDICADORES INOX \n");
			printf("2. CENICERO \n");
			printf("3. SECADOR \n");


			scanf("%i", &tipo);

			while(tipo > 3){
				printf("En esta categoría no existe ese tipo \n");
			}
			if(tipo == 1){
				printf("Se encuentra en la estateria E.1.1 \n");
			}
			if(tipo == 2){
				printf("Se encuentra en la estateria E.1.2 \n");
			}
			if(tipo == 3){
				printf("Se encuentra en la estateria E.1.3 \n");
			}

		}

		if(categoria == 6){
			printf("Elige el tipo de bateria de cocina \n");
			printf("1. STILO \n");
			printf("2. FOODIE \n");
			printf("3. ANODIZED \n");
			printf("4. FORTE \n");
			printf("5. MAGMA \n");
			printf("6. WHITE \n");
			printf("7. BLACK \n");
			printf("8. VITROCOLOR \n");

			scanf("%i", &tipo);

			while(tipo > 6){
				printf("En esta categoría no existe ese tipo \n");
			}
			if(tipo == 1){
				printf("Se encuentra en la estateria F.1.1 \n");
			}
			if(tipo == 2){
				printf("Se encuentra en la estateria F.1.2 \n");
			}
			if(tipo == 3){
				printf("Se encuentra en la estateria F.1.3 \n");
			}
			if(tipo == 4){
				printf("Se encuentra en la estateria F.2.1 \n");
			}
			if(tipo == 5){
				printf("Se encuentra en la estateria F.2.2 \n");
			}
			if(tipo == 6){
				printf("Se encuentra en la estateria F.2.3 \n");
			}
			if(tipo == 7){
				printf("Se encuentra en la estanteria F.3.1 \n");
			}
			if(tipo == 8){
				printf("Se encuentra en la estanteria F.3.2. \n");
			}


		}

		if(categoria == 7){
			printf("Elige el tipo de paellera \n");
			printf("1. ACERO \n");
			printf("2. CHEF INOX \n");
			printf("3. VALENCIANAS \n");
			printf("4. ESMALTADO \n");
			printf("5. ALUMINIO \n");


			scanf("%i", &tipo);

			while(tipo > 5){
				printf("En esta categoría no existe ese tipo \n");
			}
			if(tipo == 1){
				printf("Se encuentra en la estateria G.1.1 \n");
			}
			if(tipo == 2){
				printf("Se encuentra en la estateria G.1.2 \n");
			}
			if(tipo == 3){
				printf("Se encuentra en la estateria G.1.3 \n");
			}
			if(tipo == 4){
				printf("Se encuentra en la estateria G.2.1 \n");
			}
			if(tipo == 5){
				printf("Se encuentra en la estateria G.2.2 \n");
			}


		}

		if(categoria == 8){
			printf("Elige el tipo de cuchillos \n");
			printf("1. FORJADOS \n");
			printf("2. CERAMICOS \n");
			printf("3. ZIRCONIA \n");


			scanf("%i", &tipo);

			while(tipo > 3){
				printf("En esta categoría no existe ese tipo \n");
			}
			if(tipo == 1){
				printf("Se encuentra en la estateria H.1.1 \n");
			}
			if(tipo == 2){
				printf("Se encuentra en la estateria H.1.2 \n");
			}
			if(tipo == 3){
				printf("Se encuentra en la estateria H.1.3 \n");
			}


		}

		if(categoria == 9){
			printf("Elige el tipo de cubiertos \n");
			printf("1. CUBERTERIA HOTEL \n");
			printf("2.CUBERTERIA ARIES \n");


			scanf("%i", &tipo);

			while(tipo > 2){
				printf("En esta categoría no existe ese tipo \n");
			}
			if(tipo == 1){
				printf("Se encuentra en la estateria I.1.1 \n");
			}
			if(tipo == 2){
				printf("Se encuentra en la estateria I.1.2 \n");
			}


		}

		if(categoria == 10){
			printf("Elige el tipo de cafetera \n");
			printf("1. CLASSIC \n");
			printf("2. LUXE \n");
			printf("3. ZENIT \n");


			scanf("%i", &tipo);

			while(tipo > 3){
				printf("En esta categoría no existe ese tipo \n");
			}
			if(tipo == 1){
				printf("Se encuentra en la estateria J.1.1 \n");
			}
			if(tipo == 2){
				printf("Se encuentra en la estateria J.1.2 \n");
			}
			if(tipo == 3){
				printf("Se encuentra en la estateria J.1.3 \n");
			}

		}
	}

	if(menu == 2){
		printf("Elige la categoría del lote que desea almacenar: \n");
		printf("1. OLLAS \n");
		printf("2. SARTENES \n");
		printf("3. MOLDES \n");
		printf("4. PINZAS \n");
		printf("5. HIGIENE \n");
		printf("6. BATERIAS DE COCINA \n");
		printf("7. PAELLERAS \n");
		printf("8. CUCHILLOS \n");
		printf("9. CUBIERTOS \n");
		printf("10. CAFETERIA \n");

		scanf("%i", &categoria);

		switch(categoria){
		case 1: printf("Las ollas se almacenan en la estantería A, para más precisión indique el tipo de olla \n");
				printf("1. MASTER \n");
				printf("2. CHEF \n");
				printf("3. CHEF LUXE \n");
				printf("4. ROBUST \n");
				printf("5. CLASSIC \n");
				printf("6. PRO-CLASSIC \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("La olla master se almacena en A.1.1 \n");break;
				case 2: printf("La olla chef se almacena en A.1.2 \n");break;
				case 3: printf("La olla chef luxe se almacena en A.1.3 \n ");break;
				case 4: printf("La olla robust se almacena en A.2.1 \n");break;
				case 5: printf("La olla classic se almacena en A.2.2 \n");break;
				case 6: printf("La olla pro-classic se almacena en A.2.3 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 2: printf("Las sartenes se almacenan en la estantería B, para más precisión indique el tipo de sarten \n");
				printf("1. TRIMETAL \n");
				printf("2. CHEF INOX \n");
				printf("3. CHEF TRICAPA \n");
				printf("4. ROBUST \n");
				printf("5. FERRUM \n");
				printf("6. ALUMINIO \n");
				printf("7. GRILL \n");
				printf("8. HOME \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("La sarten trimetal se almacena en B.1.1 \n");break;
				case 2: printf("La sarten chef inox se almacena en B.1.2 \n");break;
				case 3: printf("La sarten chef tricapa se almacena en B.1.3 \n ");break;
				case 4: printf("La sarten robust se almacena en B.2.1 \n");break;
				case 5: printf("La sarten ferrum se almacena en B.2.2 \n");break;
				case 6: printf("La sarten aluminio se almacena en B.2.3 \n");break;
				case 7: printf("La sarten grill se almacena en B.3.1 \n");break;
				case 8: printf("La sarten home se almacena en B.3.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 3: printf("Los moldes se almacenan en la estantería C, para más precisión indique el tipo de molde \n");
				printf("1. ALUMINIO \n");
				printf("2. ACERO \n");
				printf("3. SILICONA \n");
				printf("4. BOMBOM POLYSTYRENO \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("El molde de aluminio se almacena en C.1.1 \n");break;
				case 2: printf("El molde de acero se almacena en C.1.2 \n");break;
				case 3: printf("El molde de silicona se almacena en C.1.3 \n ");break;
				case 4: printf("El molde de bombom polystyreno se almacena en C.2.1 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 4: printf("Las sartenes se almacenan en la estantería B, para más precisión indique el tipo de sarten \n");
				printf("1. TRIMETAL \n");
				printf("2. CHEF INOX \n");
				printf("3. CHEF TRICAPA \n");
				printf("4. ROBUST \n");
				printf("5. FERRUM \n");
				printf("6. ALUMINIO \n");
				printf("7. GRILL \n");
				printf("8. HOME \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("La sarten trimetal se almacena en B.1.1 \n");break;
				case 2: printf("La sarten chef inox se almacena en B.1.2 \n");break;
				case 3: printf("La sarten chef tricapa se almacena en B.1.3 \n ");break;
				case 4: printf("La sarten robust se almacena en B.2.1 \n");break;
				case 5: printf("La sarten ferrum se almacena en B.2.2 \n");break;
				case 6: printf("La sarten aluminio se almacena en B.2.3 \n");break;
				case 7: printf("La sarten grill se almacena en B.3.1 \n");break;
				case 8: printf("La sarten home se almacena en B.3.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

			}
		break;
		case 5:

		break;
		case 6:

		break;
		case 7:

		break;
		case 8:

		break;
		case 9:

		break;
		case 10:

		break;
		default:
		}


	}

	if(menu == 3){
		printf("Elige la categoría del lote que desea vender: \n");
		printf("1. OLLAS \n");
		printf("2. SARTENES \n");
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
		printf("Hola gerente, introduzca su contraseña: \n");
	}


return 0;
}

