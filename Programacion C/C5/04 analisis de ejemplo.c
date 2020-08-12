// Tanto como la opcion 1 y 3 van a "Hola" y las opciones 2 y 4 a "Adios"

#include <stdio.h>

enum {saludar = 1, despedirse, hola, adios};

int main()
{
	int opcion;
	printf("1. Saludar\n");
	printf("2. Despedirse\n");
	printf("3. Di hola\n");
	printf("4. Di adios\n");
	scanf("%d", &opcion);
	
	switch (opcion)
	{
		case saludar:
		case hola:
			printf("Hola\n");
			break;
		case despedirse:
		case adios:
			printf("Adios\n");
			break;
		default:
			printf("Opcion no valida\n");
	}
	
return 0;	
}

