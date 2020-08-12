// con scanf no se pueden introducir espacios

#include<stdio.h>
#define MAXLON 80

int main()
{
	char cadena[MAXLON+1];
	scanf("%s", cadena);
	printf("La cadena leida es %s.\n", cadena);

return 0;
}

