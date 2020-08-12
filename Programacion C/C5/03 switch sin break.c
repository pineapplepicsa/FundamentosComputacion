// Error tipico con switch (olvidar el break)

#include <stdio.h>

enum {Saludar = 1, Despedirse = 2};

int main()
{
	int opcion;
	printf("1. Saludar\n");
	printf("2. Despedirse\n");
	scanf("%d", &opcion);
	switch (opcion)
	{
		case Saludar:
			printf("Hola\n");
		case Despedirse:
			printf("Adios\n");
		default:
			printf("Opcion no valida\n");
	}

return 0;
}


// Ausencia de break no es un error por las funcionalidades que se le puede dar
// Para este caso es un error de funcionamiento de nuestro programa ya que no es como queremos que funcione
