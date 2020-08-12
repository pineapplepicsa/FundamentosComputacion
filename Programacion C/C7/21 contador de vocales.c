#include<stdio.h>
#include<string.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1];
	int i, contador;
	printf("Introduce una cadena (max. de %d caracteres): ", MAXLON);
	gets(a);
	contador = 0;
	for(i = 0; i < strlen(a); i++)
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			contador++;
	printf("Vocales minusculas: %d\n", contador);

	// Este programa tiene un problema de eficiencia debido a que con cada iteracion del bucle
	// for se llama a strlen y este tarda un tiempo proporcional a la longitud de la cadena.

return 0;
}

