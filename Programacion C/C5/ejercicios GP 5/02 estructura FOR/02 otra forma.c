// 2. Otra forma con un solo FOR
// Nota: desafio del primer, segundo, etc... lugar superado (H)

#include <stdio.h>
#include <string.h>

int main()
{
	int sum, num1, num2, num3, num4, i;
	char *lugar;
	sum = 0;
	
	for(i = 0; i < 5; i++)
	{
		printf("Ingrese el primer numero: ");
		scanf("%d", &num1);
		printf("Ingrese el segundo numero: ");
		scanf("%d", &num2);
		printf("Ingrese el tercer numero: ");
		scanf("%d", &num3);
		printf("Ingrese el cuarto numero: ");
		scanf("%d", &num4);
		
		sum = sum + (num1 + num2 + num3 + num4);
		
		switch (i)
		{
			case 0:
				lugar = "primer";
				break;
			case 1:
				lugar = "segundo";
				break;
			case 2:
				lugar = "tercer";
				break;
			case 3:
				lugar = "cuarto";
				break;
			case 4:
				lugar = "quinto";
				break;
		}
		
		printf("El promedio del %s juego es: %.1f", lugar, (float)sum/4);
		printf("\n\n");
	}

return 0;
}

