#include<stdio.h>
#define MAXLON 80

int main()
{
	char cadena[MAXLON+1];
	printf("Ingrese la cadena con maximo de 80 caracteres: ");
	scanf("%s", cadena);
	printf("La cadena leida es %s.\n", cadena);

return 0;
}

