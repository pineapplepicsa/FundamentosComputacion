// 5. Escribir un algoritmo que halle el promedio de tres valores A, B, C. El mismo debe emitir los
//    tres valores por separado y luego el valor promedio.

#include <stdio.h>

int main (int argc, char * argv[])

{
	int a, b, c;
	float promedio;
	
	printf("Ingrese el primer valor \n");
	scanf("%d", &a);
	printf("Ingrese el segundo valor \n");
	scanf("%d", &b);
	printf("Ingrese el segundo valor \n");
	scanf("%d", &c);
	
	promedio = (a + b + c)/3;
	
	printf("Los valores son %d %d %d \n", a, b, c);
	printf("El promedio es %f\n", promedio);
	
return 0;

}

