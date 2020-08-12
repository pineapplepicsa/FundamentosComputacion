// 3. Escribir un algoritmo que permita calcular el area de un circulo (A = 3,14 * r * r)
// no funciona un pingo porque no saben programar ni los profes


#include <stdio.h>
#define pi 3.14

int main(int argc, char * argv[])
{
	int r;
	int area;
	
	printf("ingrese el radio \n");
	
	scanf("%d, &r");
	
	area = pi * r * r;
	
	printf("El resultado del area es %d\n", area);
	
return 0;

}

