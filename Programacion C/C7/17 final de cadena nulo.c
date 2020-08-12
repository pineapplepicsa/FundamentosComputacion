#include<stdio.h>
#include<string.h>
#define MAXLON 10

int main(void)
{
	char original[MAXLON+1] = "cadena";
	char copia[MAXLON+1];
	strncpy(copia, original, MAXLON+1);
	copia[MAXLON] = '\0'; //por las dudas incluimos el caracter nulo al final de la cadena
	
	printf("Contenido de copia: %s.", copia);
	
return 0;
}

