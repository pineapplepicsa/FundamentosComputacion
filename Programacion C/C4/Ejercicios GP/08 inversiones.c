// 8. Suponga que un individuo desea invertir su capital en un banco y desea saber cuanto dinero ganara
//	  despues de un mes si el banco paga a razon de 2% mensual.

#include <stdio.h>
#define rendimiento 0.02

int main()

{
	int inversion;
	float intereses;
	
	printf("Ingrese la cantidad a invertir: ");
	scanf("%d", &inversion);
	
	intereses = inversion + inversion * (rendimiento/12);
	
	printf("Al cabo de un mes su capital sera de: %f", intereses);
	
return 0;
}

