//	7) Escriba una funcion que reciba la cantidad de elementos a promediar y retorne el promedio.
// Ej: recibe 3, luego se ingresan, dentro de la funcion tres valores, 10, 5, 15 y debera retornar
// a main el promedio = 10.

#include<stdio.h>
#include <string.h>

char *posicion(int con)
{
	char *lugar;
	switch(con)
		{
			case 0: lugar = "primer";  break;
			case 1:	lugar = "segundo"; break;
			case 2:	lugar = "tercer";  break;
			case 3:	lugar = "cuarto";  break;
			case 4:	lugar = "quinto";  break;
			case 5:	lugar = "sexto";   break;
			case 6:	lugar = "septimo"; break;
			case 7:	lugar = "octavo";  break;
			case 8:	lugar =	"noveno";  break;
			case 9:	lugar = "decimo";  break;
		}
return(lugar);
}

float promedio(can)
{
	int con;
	float x, acu, prom;
	prom = 0;
	con = 0;
	acu = 0;
	while(con < can)
	{
		printf("\nIngrese el %s valor: ", posicion(con));
		scanf("%f", &x);
		acu = acu + x;
		// printf("Valores acumulados: %f", acu);
		con++;
	}
	prom = acu / can;
return(prom);
}

int main()
{
	int can;
	printf("Ingrese cantidad de valores a promediar: ");
	scanf("%d", &can);
	// printf("Cantidad de valores a promediar: %d", can);
	printf("\nPromedio: %.2f", promedio(can));
return 0;
}

