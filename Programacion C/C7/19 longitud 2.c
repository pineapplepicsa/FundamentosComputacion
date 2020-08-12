#include<stdio.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1];
	int i;
	printf("Introduce una cadena (max. %d caracteres): ", MAXLON);
	gets(a);
	i = 0;
	
	while(a[i++] != '\0');	// Observa que no hay sentencia alguna en el while.
		printf("Longitud de la cadena: %d.\n", i - 1);

return 0;
}

