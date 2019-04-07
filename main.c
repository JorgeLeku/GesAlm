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

	int menu,categoria,tipo;


	printf("Elige una de estas opciones: \n");
	printf("1. Localizar lote \n");
	printf("2. Almacenar lote \n");
	printf("3. Vender lote \n");
	printf("4. Administración \n");

	scanf("%i", &menu);

	if(menu == 1){
		printf("Elige la categoría del lote que busca: \n");
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

		scanf("%i", &categoria);

		switch(categoria){
		case 1: printf("¿Que tipo de olla busca? \n");
				printf("1. MASTER \n");
				printf("2. CHEF \n");
				printf("3. CHEF LUXE \n");
				printf("4. ROBUST \n");
				printf("5. CLASSIC \n");
				printf("6. PRO-CLASSIC \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("La olla master se localiza en A.1.1 \n");break;
				case 2: printf("La olla chef se localiza en A.1.2 \n");break;
				case 3: printf("La olla chef luxe se localiza en A.1.3 \n ");break;
				case 4: printf("La olla robust se localiza en A.2.1 \n");break;
				case 5: printf("La olla classic se localiza en A.2.2 \n");break;
				case 6: printf("La olla pro-classic se localiza en A.2.3 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 2: printf("¿Que tipo de sarten busca? \n");
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
				case 1: printf("La sarten trimetal se localiza en B.1.1 \n");break;
				case 2: printf("La sarten chef inox se localiza en B.1.2 \n");break;
				case 3: printf("La sarten chef tricapa se localiza en B.1.3 \n ");break;
				case 4: printf("La sarten robust se localiza en B.2.1 \n");break;
				case 5: printf("La sarten ferrum se localiza en B.2.2 \n");break;
				case 6: printf("La sarten aluminio se localiza en B.2.3 \n");break;
				case 7: printf("La sarten grill se localiza en B.3.1 \n");break;
				case 8: printf("La sarten home se localiza en B.3.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 3: printf("¿Que tipo de moldes busca? \n");
				printf("1. ALUMINIO \n");
				printf("2. ACERO \n");
				printf("3. SILICONA \n");
				printf("4. BOMBOM POLYSTYRENO \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("El molde de aluminio se localiza en C.1.1 \n");break;
				case 2: printf("El molde de acero se localiza en C.1.2 \n");break;
				case 3: printf("El molde de silicona se localiza en C.1.3 \n ");break;
				case 4: printf("El molde de bombom polystyreno se localiza en C.2.1 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 4: printf("¿Que tipo de pinzas busca? \n");
				printf("1. HIELO \n");
				printf("2. REPOSTERIA \n");
				printf("3. ENSALADA \n");
				printf("4. MADERA \n");
				printf("5. ACRILICAS \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Las pinzas de hielo se localizan en D.1.1 \n");break;
				case 2: printf("Las pinzas de reposteria se localizan en D.1.2 \n");break;
				case 3: printf("Las pinzas de ensalada se localizan en D.1.3 \n ");break;
				case 4: printf("Las pinzas de madera se localizan en D.2.1 \n");break;
				case 5: printf("Las pinzas acrilicas se localizan en D.2.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 5: printf("¿Que tipo de objeto de higiene busca? \n");
				printf("1. INDICADORES INOX \n");
				printf("2. CENICERO \n");
				printf("3. SECADOR \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Los indicadores inox se localizan en E.1.1 \n");break;
				case 2: printf("El cenicero se localiza en E.1.2 \n");break;
				case 3: printf("El secador se localiza en E.1.3 \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");
				}
		break;
		case 6: printf("¿Que tipo de bateria de cocina busca?  \n");
				printf("1. STILO \n");
				printf("2. FOODIE \n");
				printf("3. ANODIZED \n");
				printf("4. FORTE \n");
				printf("5. MAGMA \n");
				printf("6. WHITE \n");
				printf("7. BLACK \n");
				printf("8. VITROCOLOR \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Las baterias de cocina stilo se localizan en F.1.1 \n");break;
				case 2: printf("Las baterias de cocina foodie se localizan en F.1.2 \n");break;
				case 3: printf("Las baterias de cocina anodized se localizan en F.1.3 \n ");break;
				case 4: printf("Las baterias de cocina forte se localizan en F.2.1 \n");break;
				case 5: printf("Las baterias de cocina magma se localizan en F.2.2 \n");break;
				case 6: printf("Las baterias de cocina white se localizan en F.2.3 \n");break;
				case 7: printf("Las baterias de cocina black se localizan en F.3.1 \n");break;
				case 8: printf("Las baterias de cocina vitrocolor se localizan en F.3.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 7: printf("¿Que tipo de paellera buscas? \n");
				printf("1. ACERO \n");
				printf("2. CHEF INOX \n");
				printf("3. VALENCIANAS \n");
				printf("4. ESMALTADO \n");
				printf("5. ALUMINIO \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Las paelleras de acero se localizan en G.1.1 \n");break;
				case 2: printf("Las paelleras chef inox se localizan en G.1.2 \n");break;
				case 3: printf("Las paelleras valencianas se localizan en G.1.3 \n ");break;
				case 4: printf("Las paellera esmaltado se localizan en G.2.1 \n");break;
				case 5: printf("Las paelleras aluminio se localizan en G.2.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 8: printf("¿Que tipo de cuchillo buscas? \n");
				printf("1. FORJADOS \n");
				printf("2. CERAMICOS \n");
				printf("3. ZIRCONIA \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Los cuchillos forjados se localizan en H.1.1 \n");break;
				case 2: printf("Los cuchillos ceramicos se localizan en H.1.2 \n");break;
				case 3: printf("Los cuchillos zirconia se localizan en H.1.3 \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 9: printf("¿Que tipo de cubiertos busca? \n");
				printf("1. CUBERTERIA HOTEL \n");
				printf("2.CUBERTERIA ARIES \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("La cuberteria de hotel se localiza en I.1.1 \n");break;
				case 2: printf("La cuberteria aries se localiza en I.1.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 10:printf("¿Que tipo de cafeteras busca? \n");
				printf("1. CLASSIC \n");
				printf("2. LUXE \n");
				printf("3. ZENIT \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Las cafeteras classic se localizan en G.1.1 \n");break;
				case 2: printf("Las cafeteras luxe se localizan en G.1.2 \n");break;
				case 3: printf("Las cafeteras zenit se localizan en G.1.3 \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		default: printf ("El numero introducido no corresponde a ninguna categoria \n");
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
		case 4: printf("Las pinzas se almacenan en la estantería D, para más precisión indique el tipo de pinzas \n");
				printf("1. HIELO \n");
				printf("2. REPOSTERIA \n");
				printf("3. ENSALADA \n");
				printf("4. MADERA \n");
				printf("5. ACRILICAS \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Las pinzas de hielo se almacenan en D.1.1 \n");break;
				case 2: printf("Las pinzas de reposteria se almacenan en D.1.2 \n");break;
				case 3: printf("Las pinzas de ensalada se almacenan en D.1.3 \n ");break;
				case 4: printf("Las pinzas de madera se almacenan en D.2.1 \n");break;
				case 5: printf("Las pinzas acrilicas se almacenan en D.2.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 5: printf("Los objetos de higiene se almacenan en la estantería E, para más precisión indique el tipo de objeto de higiene \n");
				printf("1. INDICADORES INOX \n");
				printf("2. CENICERO \n");
				printf("3. SECADOR \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Los indicadores inox se almacenan en E.1.1 \n");break;
				case 2: printf("El cenicero se almacena en E.1.2 \n");break;
				case 3: printf("El secador se almacena en E.1.3 \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");
				}
		break;
		case 6: printf("Las baterias de cocina se almacenan en la estantería F, para más precisión indique el tipo de bateria de cocina \n");
				printf("1. STILO \n");
				printf("2. FOODIE \n");
				printf("3. ANODIZED \n");
				printf("4. FORTE \n");
				printf("5. MAGMA \n");
				printf("6. WHITE \n");
				printf("7. BLACK \n");
				printf("8. VITROCOLOR \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Las baterias de cocina stilo se almacenan en F.1.1 \n");break;
				case 2: printf("Las baterias de cocina foodie se almacenan en F.1.2 \n");break;
				case 3: printf("Las baterias de cocina anodized se almacenan en F.1.3 \n ");break;
				case 4: printf("Las baterias de cocina forte se almacenan en F.2.1 \n");break;
				case 5: printf("Las baterias de cocina magma se almacenan en F.2.2 \n");break;
				case 6: printf("Las baterias de cocina white se almacenan en F.2.3 \n");break;
				case 7: printf("Las baterias de cocina black se almacenan en F.3.1 \n");break;
				case 8: printf("Las baterias de cocina vitrocolor se almacenan en F.3.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 7: printf("Las paelleras se almacenan en la estantería G, para más precisión indique el tipo de paellera \n");
				printf("1. ACERO \n");
				printf("2. CHEF INOX \n");
				printf("3. VALENCIANAS \n");
				printf("4. ESMALTADO \n");
				printf("5. ALUMINIO \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Las paelleras de acero se almacenan en G.1.1 \n");break;
				case 2: printf("Las paelleras chef inox se almacenan en G.1.2 \n");break;
				case 3: printf("Las paelleras valencianas se almacenan en G.1.3 \n ");break;
				case 4: printf("Las paellera esmaltado se almacenan en G.2.1 \n");break;
				case 5: printf("Las paelleras aluminio se almacenan en G.2.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 8: printf("Los cuchillos se almacenan en la estantería H, para más precisión indique el tipo de cuchillo \n");
				printf("1. FORJADOS \n");
				printf("2. CERAMICOS \n");
				printf("3. ZIRCONIA \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Los cuchillos forjados se almacenan en H.1.1 \n");break;
				case 2: printf("Los cuchillos ceramicos se almacenan en H.1.2 \n");break;
				case 3: printf("Los cuchillos zirconia se almacenan en H.1.3 \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 9: printf("Los cubiertos se almacenan en la estantería I, para más precisión indique el tipo de cubierto \n");
				printf("1. CUBERTERIA HOTEL \n");
				printf("2.CUBERTERIA ARIES \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("La cuberteria de hotel se almacena en I.1.1 \n");break;
				case 2: printf("La cuberteria aries se almacena en I.1.2 \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 10:printf("Las cafeteras se almacenan en la estantería G, para más precisión indique el tipo de cafetera \n");
				printf("1. CLASSIC \n");
				printf("2. LUXE \n");
				printf("3. ZENIT \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Las cafeteras classic se almacenan en G.1.1 \n");break;
				case 2: printf("Las cafeteras luxe se almacenan en G.1.2 \n");break;
				case 3: printf("Las cafeteras zenit se almacenan en G.1.3 \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		default: printf ("El numero introducido no corresponde a ninguna categoria \n");
		}


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

		scanf("%i", &categoria);

		switch(categoria){
		case 1: printf("Elige el tipo de olla que se va a vender \n");
				printf("1. MASTER \n");
				printf("2. CHEF \n");
				printf("3. CHEF LUXE \n");
				printf("4. ROBUST \n");
				printf("5. CLASSIC \n");
				printf("6. PRO-CLASSIC \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendida la olla master \n");break;
				case 2: printf("Vendida la olla chef \n");break;
				case 3: printf("Vendida la olla chef luxe \n ");break;
				case 4: printf("Vendida la olla robust \n");break;
				case 5: printf("Vendida la olla classic \n");break;
				case 6: printf("Vendida la olla pro-classic \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 2: printf("Elige el tipo de sarten que se va a vender \n");
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
				case 1: printf("Vendida la sarten trimetal \n");break;
				case 2: printf("Vendida la sarten chef inox \n");break;
				case 3: printf("Vendida la sarten chef tricapa \n ");break;
				case 4: printf("Vendida la sarten robust \n");break;
				case 5: printf("Vendida la sarten ferrum \n");break;
				case 6: printf("Vendida la sarten aluminio \n");break;
				case 7: printf("Vendida la sarten grill \n");break;
				case 8: printf("Vendida la sarten home \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 3: printf("Elige el molde que deseas vender \n");
				printf("1. ALUMINIO \n");
				printf("2. ACERO \n");
				printf("3. SILICONA \n");
				printf("4. BOMBOM POLYSTYRENO \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendido el molde de aluminio \n");break;
				case 2: printf("Vendido el molde de acero \n");break;
				case 3: printf("Vendido el molde de siicona \n ");break;
				case 4: printf("vendido el molde de bombom polystyreno \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 4: printf("¿Que tipo de pinzas deseas vender? \n");
				printf("1. HIELO \n");
				printf("2. REPOSTERIA \n");
				printf("3. ENSALADA \n");
				printf("4. MADERA \n");
				printf("5. ACRILICAS \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendidas las pinzas de hielo \n");break;
				case 2: printf("Vendidas las pinzas de reposteria \n");break;
				case 3: printf("vendidas las pinzas de ensalada \n ");break;
				case 4: printf("Vendidas las pinzas de madera \n");break;
				case 5: printf("Vendidas las pinzas acrilicas\n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 5: printf("¿Que objeto de higiene deseas vender? \n");
				printf("1. INDICADORES INOX \n");
				printf("2. CENICERO \n");
				printf("3. SECADOR \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendidos los indicadores inox \n");break;
				case 2: printf("Vendido el cenicero \n");break;
				case 3: printf("Vendido el secador \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");
				}
		break;
		case 6: printf("¿Que bateria de cocina deseas vender? \n");
				printf("1. STILO \n");
				printf("2. FOODIE \n");
				printf("3. ANODIZED \n");
				printf("4. FORTE \n");
				printf("5. MAGMA \n");
				printf("6. WHITE \n");
				printf("7. BLACK \n");
				printf("8. VITROCOLOR \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendida la bateria de cocina stilo \n");break;
				case 2: printf("Vendida la bateria de cocina foodie \n");break;
				case 3: printf("Vendida la bateria de cocina anodized \n ");break;
				case 4: printf("Vendida la bateria de cocina forte \n");break;
				case 5: printf("Vendida la bateria de cocina magma \n");break;
				case 6: printf("Vendida la bateria de cocina white \n");break;
				case 7: printf("Vendida la bateria de cocina black \n");break;
				case 8: printf("Vendida la bateria de cocina vitrocolor \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 7: printf("¿Que paellera deseas vender? \n");
				printf("1. ACERO \n");
				printf("2. CHEF INOX \n");
				printf("3. VALENCIANAS \n");
				printf("4. ESMALTADO \n");
				printf("5. ALUMINIO \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendida la paellera de acero \n");break;
				case 2: printf("Vendida la paellera chef inox \n");break;
				case 3: printf("Vendida la paellera valenciana \n ");break;
				case 4: printf("Vendida la paellera con esmaltado \n");break;
				case 5: printf("Vendida la paellera de aluminio \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 8: printf("¿Que cuchillo deseas vender? \n");
				printf("1. FORJADOS \n");
				printf("2. CERAMICOS \n");
				printf("3. ZIRCONIA \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendido el cuchillo forjado \n");break;
				case 2: printf("Vendido el cuchillo ceramico \n");break;
				case 3: printf("Vendido el cuchillo de zirconia \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 9: printf("¿Que cuberteria deseas vender? \n");
				printf("1. CUBERTERIA HOTEL \n");
				printf("2.CUBERTERIA ARIES \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendida la cuberteria de hotel \n");break;
				case 2: printf("vendida la cuberteria de aries \n");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		case 10:printf("¿Que cafetera deseas vender? \n");
				printf("1. CLASSIC \n");
				printf("2. LUXE \n");
				printf("3. ZENIT \n");
				scanf("%i", &tipo);
				switch(tipo){
				case 1: printf("Vendida cafetera classic \n");break;
				case 2: printf("Vendida cafetera luxe \n");break;
				case 3: printf("Vendida cafetera zenit \n ");break;
				default: printf("El numero introducido no corresponde a ningún tipo \n");

				}
		break;
		default: printf ("El numero introducido no corresponde a ninguna categoria \n");
		}


	}
	}
	if(menu == 4){
		printf("Hola gerente, introduzca su contraseña: \n")
	}


return 0;
}

