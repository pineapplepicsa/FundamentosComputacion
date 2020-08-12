// 1. Escribir un algoritmo que permita ingresar 10 numeros y calcule el promedio
// Aca entendi que hay que poner (float) a los enteros para resultados en flotante
// de otro modo, aunque la variable sea flotante el resultado no tendra decimales porque
// el numero divisible no puede ser paridos en partes no enteras

#include <stdio.h>
#define N 10

int main()
{
	int sum, num, i;
	float prom;
	sum = 0;
	for (i = 0; i < N; i++)
	{
		printf("Ingrese el numero: ");
		scanf("%d", &num);
		sum = sum + num;
	}
	
	prom = (float)sum / N;
	
	printf("El resultado de la suma es: %d", sum);
	printf("\nEl promedio sera: %.1f", prom);
	
return 0;
}
