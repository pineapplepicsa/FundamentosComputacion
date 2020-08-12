// Funcion strncpy

#include<stdio.h>
#include<string.h>
#define MAXLON 10

int main(void)
{
	char original[MAXLON+1] = "cadena";
	char copia[MAXLON+1];
	strncpy(copia, original, MAXLON+1); //Copia, a lo sumo, MAXLON+1 caracteres.
	
	printf("Contenido de copia: %s.\n", copia);

return 0;
}

// Si la cadena original tiene mas caracteres de los que puede almacenar la cadena destino, la copia es
// imperfecta: no terminara en '\0
