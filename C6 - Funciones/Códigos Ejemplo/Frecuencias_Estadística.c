#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "spanish");
	system("color F1");

	//VARIABLE LONGITUD DEL ARREGLO//
	int longitud = 0;

	//VARIABLES DE SARMIENTO//
	float i = 0, r = 0, k = 0;

	//VARIABLE CONTADOR//
	int contador = 0, contador2 = 0, j = 0;

	//VARIABLES VMIN, VMAX//
	float vmin = 0, vmax = 0;

	printf("		d88888b .d8888. d888888b  .d8b.  d8888b. d888888b .d8888. d888888b d888888b  .o88b.  .d8b.  \n");
	printf("		88'     88'  YP `~~88~~' d8' `8b 88  `8D   `88'   88'  YP `~~88~~'   `88'   d8P  Y8 d8' `8b \n");
	printf("		88ooooo `8bo.      88    88ooo88 88   88    88    `8bo.      88       88    8P      88ooo88 \n");
	printf("		88~~~~~   `Y8b.    88    88~~~88 88   88    88      `Y8b.    88       88    8b      88~~~88 \n");
	printf("		88.     db   8D    88    88   88 88  .8D   .88.   db   8D    88      .88.   Y8b  d8 88   88 \n");
	printf("		Y88888P `8888Y'    YP    YP   YP Y8888D' Y888888P `8888Y'    YP    Y888888P  `Y88P' YP   YP \n");
	printf("\n\n");

	
	
	printf("               			Ingrese la cantidad de datos a evaluar:");
	scanf("%i", &longitud);

	//VARIABLE ARREGLO//
	float datos[longitud], aux = 0;

	for (contador = 0; contador < longitud; contador++)
	{
		printf("\nElemento Posición [%i]: ", contador);
		scanf("%f", &datos[contador]);
		
	}

	for (contador = 0; contador < longitud - 1; contador++)
	{
		for (contador2 = 0; contador2 < longitud - 1; contador2++)
		{
			if (datos[contador2] > datos[contador2 + 1])
			{
				aux = datos[contador2];
				datos[contador2] = datos[contador2 + 1];
				datos[contador2 + 1] = aux;
			}
		}
	}

	//DETERMINAR VMIN,VMAX//
	vmin = datos[0];
	vmax = datos[longitud - 1];

	//DETERMINAR R//
	r = vmax - vmin;

	//DETERMINAR K(CANTIDAD DE CATEGORÍAS)//
	k = sqrt(longitud);
	k = ceil(k);

	//DETERMINAR I(LO QUE SUMAMOS A LOS LIMITES)//
	i = r / k;
	i = ceil(i *10) / 10;

	//VARIABLE LIMITES (ARREGLO)//
	float limiteinf[1000];
	float limitesup[1000];
	limiteinf[0] = vmin;
	limitesup[0] = vmin + i;

	for (contador = 1; contador <= k + 1; contador++)
	{
		limiteinf[contador] = limitesup[contador - 1];
		limitesup[contador] = limiteinf[contador] + i;

	}

	//VARIABLES FRECUENCIAS// 
	int frecuencia_absoluta[1000];
	float frecuencia_relativa[1000];
	int frecuencia_absoluta_total[1000];
	float frecuencia_relativa_total[1000];
	float frecuencia_porcentual[1000];
	float frecuencia_porcentual_total[1000];
	float cantidad2=0;
	
	cantidad2=longitud;


	for (contador = 0; contador < 1; contador++)
	{
		for (j = 0; j < longitud; j++)
		{
			if (datos[j] >= limiteinf[contador] && datos[j] <= limitesup[contador])
			{
				frecuencia_absoluta[contador] += 1;

			}
		}
	}
	
	for (contador = 1; contador < k; contador++)
	{
		for (j = 0; j < longitud; j++)
		{
			if (datos[j] > limiteinf[contador] && datos[j] <= limitesup[contador])
			{
				frecuencia_absoluta[contador] += 1;

			}
		}
	}
	
	
	
	
	
	for (contador = 0; contador < k; contador++)
	{
		frecuencia_relativa[contador] = frecuencia_absoluta[contador]/cantidad2;
		frecuencia_absoluta_total[contador] = frecuencia_absoluta_total[contador - 1] + frecuencia_absoluta[contador];
		frecuencia_relativa_total[contador] = frecuencia_relativa_total[contador - 1] + frecuencia_relativa[contador];
		frecuencia_porcentual[contador] =  (frecuencia_absoluta[contador]/cantidad2)*100;
		frecuencia_porcentual_total[contador] = frecuencia_porcentual_total[contador-1] + frecuencia_porcentual[contador];
	}

	printf ("\n\n\n");
	printf ("		8888888b. 8888888 .d8888b. 88888888888 8888888b.  8888888 888888b.   888     888  .d8888b. 8888888 .d88888b.  888b    888\n");
	printf ("		888  8888b  888  d88P  Y88b    888     888   Y88b   888   888  888b  888     888 d88P  Y88b  888  d88P   Y88b 8888b   888\n");
	printf ("		888    888  888  Y88b.         888     888    888   888   888  .88P  888     888 888    888  888  888     888 88888b  888 \n");
	printf ("		888    888  888   YY888b.      888     888   d88P   888   8888888K.  888     888 888         888  888     888 888Y88b 888 \n");
	printf ("		888    888  888      YY88b.    888     8888888PP    888   888   888b 888     888 888         888  888     888 888 Y88b888 \n");
	printf ("		888    888  888        8888    888     888 T88b     888   888    888 888     888 888    888  888  888     888 888  Y88888 \n");
	printf ("		888  .d88P  888  Y88b  d88P    888     888  T88b    888   888   d88P Y88b. .d88P Y88b  d88P  888  Y88b. .d88P 888   Y8888 \n");
	printf ("		8888888PP 8888888 YY8888PP     888     888   T88b 8888888 8888888PP   8Y88888PP   YY8888PP 8888888 YY88888PP  888    Y888 \n\n\n");


	printf ("Arreglo ordenado:\n");
	for (contador = 0; contador <longitud; contador++){
		
		printf ("  |[%.2f]|", datos[contador]);
	}
	
	printf ("\n\n");
	for (contador = 1; contador <= k; contador++)
	{
		printf("\nCATEGORÍA[%i]: DESDE[%.2f] HASTA[%.2f]  ||  fa:[%i]  ||  fr:[%.4f]  ||  frp:[%.2f%]  || Fa:[%i]  ||  Fr:[%.2f]  ||  Frp:[%.2f]  ||\n", contador, limiteinf[contador - 1], limitesup[contador - 1], frecuencia_absoluta[contador - 1], frecuencia_relativa[contador - 1], frecuencia_relativa[contador - 1] *100, frecuencia_absoluta_total[contador - 1], frecuencia_relativa_total[contador-1], frecuencia_porcentual_total[contador-1]);
	}
	
	printf ("\n\n--------------------------\n");
	printf("|VALOR DE I:[%.2f]|", i);
	printf("\n|VALOR DE K:[%f]|", k);
	printf("\n|VMIN:[%.2f]|", vmin);
	printf("\n|VMAX:[%.2f]|", vmax);
	printf ("\n--------------------------\n");
	
	
	system ("pause");
	return 0;
	
	
}
