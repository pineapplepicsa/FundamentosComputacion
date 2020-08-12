// Ejemplo de condicional if o seleccion switch

#include <stdio.h>

int main()
{
	int opcion;
	printf("1. Saluda\n");
	printf("2. Despidete\n");
	scanf("%d", &opcion);
	switch (opcion)
	{
		case 1:
			printf("Hola\n");
			break;
		case 2:
			printf("Adios\n");
			break;
		default:
			printf("Opcion no valida\n");
			break;
	}

return 0;
}

