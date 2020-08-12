#include<string.h>
#define MAXLON 10

int main(void)
{
	char original[MAXLON+1] = "cadena";
	char copia[MAXLON+1];
	strcpy(copia, original); // Copia el contenido de orinal en copia
	
	// La funcion strcpy, abreviatura de string copy, no comprueba si el destino de la copia
	// tiene capacidad suficiente para la cadena, puede provocar un desbordamiento.
	// La funcion strcpy se limita a copiar caracter a caracter hasta llegar a un caracter nulo.
	
	printf("Contenido: %s", copia);
	
return 0;
}

