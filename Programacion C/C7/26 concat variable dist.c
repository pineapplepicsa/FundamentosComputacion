// Asignacion a nueva variable
// Programa que concatenja dos cadenas en una variable distinta.

#include<stdio.h>
#include<string.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1], b[MAXLON+1], c[MAXLON+1];
	
	printf("Introduce un texto (max. de %d caracteres): ", MAXLON);
	gets(a);
	printf("Introduce otro texto (max. de %d caracteres): ", MAXLON);
	gets(b);
	strcpy(c, a); // Copia el valor de "a" en "c"
	strcat(c, b); // Concatena "a" y "b" en "c"
	
	printf("Concatenacion de ambos: %s", c);

return 0;
}

// Es responsabilidad del programador asegurarse de que la cadena que recibe la concatenacion disponga
// de capacidad suficiente para almacenar la cadena resultante
