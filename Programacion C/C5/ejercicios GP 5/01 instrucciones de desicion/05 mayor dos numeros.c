// 5. Escriba un programa capaz de encontrar el mas alto de dos valores (M y N)

#include <stdio.h>

int main()
{
	int M, N;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &M);
	printf("\nIngrese el segundo valor: ");
	scanf("%d", &N);
	
	if(M < N)
		printf("\nEl mayor es: %d", N);
	else if (M == N)
		printf("\nNo hay mayor, son iguales");
	else
		printf("\nEl mayor es: %d", M);
	
return 0;
}
