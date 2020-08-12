// 1. Realizar un algoritmo que permita calcular la suma de los numeros ingresados mientras que el valor
// acumulado no supere el valor 100. Mostrar el valor acumulado antes de superar 100.

#include <stdio.h>

int main()
{
	int sum, num1;
	sum = 0;
	
	printf("Ingrese un numero: \n");
	scanf("%d", &num1);
	sum = sum + num1;
	
	while (sum < 100)
	{
		printf("Ingrese el siguiente numero: \n");
		scanf("%d", &num1);
		sum = sum + num1;
	}

	printf("La suma de todos los numeros sumados menores a 100 es [%d]\n", sum - num1);

return 0;
}

