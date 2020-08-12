// 8. Diseñar un programa C que almacene en un vector los 100 primeros numeros primos

#include <stdio.h>

int EsPrimo(int Valor)
{
	int primo = 0;
	int divisores;
	// Calcular divisores del numero
	for(divisores=2;divisores <Valor-1 && primo==0;divisores++)
	{
	// Comprobar si existe un divisor
	if(Valor%divisores==0) primo=1;
	}
	return primo;
}

int main(void)
{
	int numero;
	int valores;
	// Solicitar por pantalla el numero
	printf("Teclear No.: ");
	scanf(" %d",&numero);
	// Visualizar todos los números primos entre 1 y el numero
	// se utilizara una función para saber si un numero es primo o no
	for(valores=1;valores<=numero;valores++)
	{
		if(EsPrimo(valores)==0)
    		printf("El valor %d es primo\n");
	}
return 0;
}

