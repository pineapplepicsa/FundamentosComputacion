// Si la cadena termina con el caracter nulo es facil conocer la longitud

#include<stdio.h>
#define MAXLON 80

int main(void)
{
	char a [MAXLON+1];
	int i;
	printf("Introduce una cadena (max. %d caracteres): ", MAXLON);
	gets(a);
	i = 0;
	while(a[i] != '\0')
		i++;
	printf("Longitud de la cadena: %d\n", i);

return 0;
}

