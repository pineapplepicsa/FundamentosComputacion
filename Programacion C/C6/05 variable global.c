//Este programa imprime las potencias del 2 del 1 al 5

#include<stdio.h>

int i = 1; // variable global i

int doble (void)
{
	i*=2; // referencia a la variable global i
	return i; // referencia a la variable global i
}

int main()
{
	int i; // variable local a main
	for(i=1; i<=5; i++)
		printf("%d\n", doble()); // OJO el valor mostrado corresponde a la i global
	return 0;
}

