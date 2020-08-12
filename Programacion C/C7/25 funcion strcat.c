// Funcion strcat
// Abreviatura de "string concatenate".

#include<stdio.h>
#include<string.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1], b[MAXLON+1];
	printf("Introduce un texto (max. de %d caracteres): ", MAXLON);
	gets(a);
	printf("Introduce otro texto (max. de %d caracteres): ", MAXLON);
	gets(b);
	strcat(a, b); //Realiza la concatenacion sobreescribiendo el primer vector
	printf("Concatenacion de ambos: %s", a);

return 0;
}

