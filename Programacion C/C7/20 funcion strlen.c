// funcion strlen: calcula la longitud de una cadena. Abreviatura de "string length"

#include<stdio.h>
#include<string.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1];
	int l;
	printf("Introduce una cadena (max. de %d caracteres): ", MAXLON);
	gets(a);
	l = strlen(a);
	printf("Longitud de la cadena: %d\n", l);

return 0;
}

