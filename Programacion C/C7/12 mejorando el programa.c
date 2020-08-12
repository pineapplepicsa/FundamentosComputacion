#include<stdio.h>
#define MAXLON 10

int main(void)
{
	char original[MAXLON+1] = "cadena";
	char copia[MAXLON+1];
	int i;
	for(i = 0; original[i] != '\0'; i++)
		copia[i] = original[i];
	copia[i] = '\0';
	
	// En este codigo el for controla si se ha llegado al fin de la cadena añadiendo el caracter nulo
	// cuando finaliza el bucle
	
	printf("La cadena copia dice: %s", copia);

return 0;
}

