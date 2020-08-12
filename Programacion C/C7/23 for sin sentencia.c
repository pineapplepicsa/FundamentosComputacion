#include<stdio.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1];
	int i;
	printf("Introduce una cadena (max. de %d caracteres): ", MAXLON);
	gets(a);
	
	for(i = 0; a[i]; i++); // Tampoco hay sentencia alguna en el for.
	
	printf("Longitud de la cadena: %d\n", i);

return 0;
}

