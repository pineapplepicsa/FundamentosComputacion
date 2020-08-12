// 1. Escriba un algoritmo que determine si un numero ingresado es positivo, negativo o cero.
// Nota: si se ingresa cualquier caracter reconocera cero

#include <stdio.h>

int main()
{
	int numero; // defino la variable de trabajo
	printf("Ingrese un numero ");
	scanf("%d", &numero); // ingreso el numero entero
	
	if (numero > 0)
		printf("El numero es positivo");
	else if (numero < 0)
		printf("El numero es negativo");
	else
		printf("El numero es cero");

return 0;
}

