#include <stdio.h>
#include <math.h>

int main()

{
	int a, b, i;
	float s;
	// Pedir limites inferior y superior
	
	do
	{
		printf("Limite inferior: "); scanf("%d", &a);
		if (a < 0) printf("No puede ser negativo \n");
	}
	
	while (a < 0);
	do
	{
		printf("Limite superior: "); scanf("%d", &b);
		if (a < 0) printf("No puede ser menor que %d \n", a);
	}
	
	while (b < a);
	// Calcula la sumatoria de la raiz cuadrada de i entre a y b
	s = 0.0;
	for (i = 0; i <= b; i++)
	s += sqrt(i);
	
	//Muestra el resultado
	printf("La suma de las raices de %d a %d es %f\n", a, b, s);
	
return 0;
}

