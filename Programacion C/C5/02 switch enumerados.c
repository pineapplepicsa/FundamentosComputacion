// Ejemplo 2 de switch
// No funciona, teoria: no reconoce las palabras como tipos enumerados

// Error corregido, el programa no reconoce los casos si se pone un punto y coma en la linea switch

#include <stdio.h>

enum {saludar = 1, despedirse = 2};

int main()
{
	int opcion;
	printf("1. Saludar\n");
	printf("2. Despedirse\n");
	scanf("%d", &opcion);
	switch (opcion)
	{
		case saludar:
			printf("Hola\n");
			break;
		case despedirse:
			printf("Adios\n");
			break;
		default:
			printf("Opcion no valida\n");
			break;
	}
	
return 0;
}

