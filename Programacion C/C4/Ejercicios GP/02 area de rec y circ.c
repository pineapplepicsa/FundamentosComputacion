// 2. Realizar un programa que permita obtener el area de un rectangulo y el area de un circulo.
//    Mostrar los resultados obtenidos.

#include <stdio.h>
#define pi 3.14

int main()

{
	int a, b, r, arearec;
	float areacirc;
	
	printf("Ingrese la base del rectangulo: ");
	scanf("%d", &a);
	printf("\nIngrese la altura del rectangulo: ");
	scanf("%d", &b);
	
	arearec = a * b;
	
	printf("\nEl area del rectangulo es de: %d", arearec);
	printf("\nIngrese el radio del circulo: ");
	scanf("%d", &r);
	
	areacirc = pi * r * r;
	
	printf("\nEl area del circulo es de: %f", areacirc);

return 0;
}

