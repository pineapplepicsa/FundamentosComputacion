// Contador modificado

#include<stdio.h>
#include<string.h>
#define MAXLON 80

int main (void)
{
	char a[MAXLON+1];
	int i, longitud, contador;
	printf("Introduce una cadena (max. de %d caracteres): ", MAXLON);
	gets(a);
	longitud = strlen(a);
	contador = 0;
	for(i = 0; i < longitud; i++)
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			contador++;
	printf("Vocales minusculas: %d\n", contador);

return 0;
}

