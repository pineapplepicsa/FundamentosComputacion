// Concatenacion:
// En c no se puede usar + para concatenar cadenas. Se puede concatenar a traves de bucles.

#include<stdio.h>
#include<string.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1], b[MAXLON+1];
	int longa, longb;
	int i;
	
	printf("Introduce un texto (max. de %d caracteres): ", MAXLON);
	gets(a);
	printf("Introduce otro texto (max. de %d caracteres): ", MAXLON);
	gets(b);
	longa = strlen(a);
	longb = strlen(b);
	
	for(i = 0; i < longb; i++)
		a[longa+i] = b[i];
	
	a[longa + longb] = '\0';
	printf("Concatenacion de ambos: %s", a);

return 0;
}

