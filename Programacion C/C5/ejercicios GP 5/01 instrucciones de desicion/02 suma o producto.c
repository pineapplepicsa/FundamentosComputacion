// Escriba un algoritmo que permita leer dos valores numericos A y B. Si A es mayor que B debe realizar
// la suma de ambos, caso contrario, se hace el producto.

#include <stdio.h>
int main() 
{
	int a,b; // defino la variable de trabajo
	printf("Ingrese el primer numero\n");
	scanf("%d", &a);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &b);
	
	if (a >b)
	{
		printf("La suma de los numeros es");
		printf("%6d", a+b);
	}
	else
	{
		printf("El producto de los numeros es");
		printf("%6d", a*b);
	}

return 0;
}

