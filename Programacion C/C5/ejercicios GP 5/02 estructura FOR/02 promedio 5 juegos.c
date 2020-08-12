// 2. Ingresar 5 juegos de cuatro valores cada uno. Calcular y emitir el promedio de cada juego.

#include <stdio.h>

int main()
{
	int sum, num, i, j;
	sum = 0;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Ingrese el numero\n");
			scanf("%d", &num);
			sum = sum + num;
		}
	
	printf("El promedio de cada juego es: %.1f", (float)sum/4);
	printf("\n\n");
	}

return 0;
}

