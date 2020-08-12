/*Escribir el código fuente de un programa que desde main se llame a una 
función que recibe dos argumentos enteros y devuelve un valor booleano, siendo 
TRUE si el mayor argumento es divisible por el menor o FALSE si el mayor 
argumento no es divisible por el menor.   */

#include <stdio.h>
#include <stdbool.h>

bool divisible(int x, int y)
{
	bool band;
	if(x < y)
	{
		if(y%x==0)
		{
			band = true;
			return(band);
		}
		else
		{
			band = false;
			return(band);
		}
	}
	else
	{
		if(x%y==0)
		{
			band = true;
			return(band);
		}
		else
		{
			band = false;
			return(band);
		}
	}
}
	
int main()
{	
	int a, b;
	bool bandera;
	
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	printf("\nIngrese otro numero: ");
	scanf("%d", &b);
	
	bandera=divisible(a,b);
	
	if(bandera==true)
		printf("\n\nEl mayor es divisible por el menor.");
	else
		printf("\n\nEl mayor no es divisible por el menor.");
	
return 0;
}

