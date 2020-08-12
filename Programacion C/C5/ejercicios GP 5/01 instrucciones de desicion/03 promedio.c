// Escriba un algoritmo que permita ingresar valores numericos A, B, C, D, E y decir si su promedio
// es igual que o mayor a 10

#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	float prom; // defino las variables de trabajo
	printf("Ingrese el primer numero\n");
	scanf("%d", &a);
	printf("Ingrese el segundo numero\n");
	scanf("%d", &b);
	printf("Ingrese el tercer numero\n");
	scanf("%d", &c);
	printf("Ingrese el cuarto numero\n");
	scanf("%d", &d);
	printf("Ingrese el quinto numero\n");
	scanf("%d", &e);
	prom=(float)((a + b + c + d + e)/5);
	
	if(prom >= 10)
	{
		printf("El promedio es mayor a 10\n");
		printf("y vale %6f", prom);
	}
	else
		printf("El promedio es menor a 10 y vale: %6f ", prom);

return 0;
}

