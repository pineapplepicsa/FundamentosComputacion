//Modifique el programa anterior para realizarlo con un procedimiento.

#include <stdio.h>

void validar(void)  //Esto es un procedimiento (funcion sin parametros)
{
	int x;
	
	printf("Ingrese un numero: ");
	scanf("%d", &x);
	
	if(x < 0)
		printf("\nNegativo");
	else
	{
		if(x > 0)
			printf("\nPositivo");
		else
			printf("\nCero");
	}
}

int main()
{
	validar();
	
return 0;
}

