// 7. Escribir un programa que permita ingresar tres numeros distintos entre si y los muestre en pantalla
// ordenados de mayor a menor y de menor a mayor.

#include <stdio.h>

int main()
{
	int R, S, T;
	
	printf("Inserte el primer valor: ");
	scanf("%d", &R);
	printf("\nInserte el segundo valor: ");
	scanf("%d", &S);
	printf("\nInserte el tercer valor: ");
	scanf("%d", &T);

	// Al ser solo 3 numeros lo que hice fue analizar los 6 casos posibles
	// Cabe aclarar que las 6 posibilidades son en caso de que los 3 valores sean distintos
	// En cuando se ingresa un valor identico a otro no arroja resultados

	if (R > S && S > T)
	{
		printf("\nDe mayor a menor: %d %d %d", R, S, T);
		printf("\nDe menor a mayor: %d %d %d", T, S, R);
	}
	else if (S > T && T > R)
	{
		printf("\nDe mayor a menor: %d %d %d", S, T, R);
		printf("\nDe menor a mayor: %d %d %d", R, T, S);
	}
	else if (T > R && R > S)
	{
		printf("\nDe mayor a menor: %d %d %d", T, R, S);
		printf("\nDe menor a mayor: %d %d %d", S, R, T);
	}
	else if (S > R && R > T)
	{
		printf("\nDe mayor a menor: %d %d %d", S, R, T);
		printf("\nDe menor a mayor: %d %d %d", T, R, S);
	}
	else if (T > S && S > R)
	{
		printf("\nDe mayor a menor: %d %d %d", T, S, R);
		printf("\nDe menor a mayor: %d %d %d", R, S, T);
	}
	else if (R > T && T > S)
	{
		printf("\nDe mayor a menor: %d %d %d", R, T, S);
		printf("\nDe menor a mayor: %d %d %d", S, T, R);
	}

return 0;
}
//231
