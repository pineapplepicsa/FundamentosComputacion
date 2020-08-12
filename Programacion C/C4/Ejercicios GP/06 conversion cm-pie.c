// 6. Diseñe un algoritmo para convertir una longitud dada en centimetros a pies. Considere que
//	  1 pie = 30.48 centimetros

#include <stdio.h>
#define pie 30.48

int main()

{
	int a;
	float b;
	
	printf("Ingrese la medida en centimetros: ");
	scanf("%d", &a);
	
	b = (float)a / pie;
	
	printf("La medida en pies seria: %f", b);
	
return 0;
}

