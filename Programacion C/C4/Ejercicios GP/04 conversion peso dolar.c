// 4. Convertir una cantidad expresada en dolares a pesos y mostrar el resultado. El algoritmo debe
//	  permitir ingresar la cantidad y el valor de la cotizacion del dolar. Realizar prueba de escritorio

#include <stdio.h>
#define PAIS 0.3

int main()
{
	int a;
	float b, monto;
	
	printf("Ingrese la cotizacion del dolar: ");
	scanf("%f", &b);
	printf("Ingrese el mondo en pesos a comprar: ");
	scanf("%d", &a);
	
	b = b + b * PAIS;
	monto = a / b;
	
	printf("Monto: %f", monto);
		
return 0;
	
}

