/*Escribir el código fuente de un programa que contenga una función 
que reciba un entero y devuelva P si es POSITIVO y N si es NEGATIVO.  */

#include <stdio.h>

char validar(int x)
{
	if(x < 0)
		return('N');
	else
	{
		if(x > 0)
			return('P');
		else
			return('C');
	}
}

int main(int argc, char *argv[])
{
	int a;
	char aux;
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	aux=validar(a);
	printf("\nEL NUMERO ES: %c", aux);

return 0;
}

