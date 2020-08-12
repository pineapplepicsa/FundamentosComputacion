// 2. Escribir un algoritmo que calcule y muestre el cubo de un numero ingresado

#include <stdio.h>

int main()
{
	int a;
	int cubo;
	
	printf("Ingrese el numero a calcular el cubo\n");
	
	scanf("%d", &a);
	
	cubo = a * a * a;
	
	printf("El resultado del cubo es %d\n", cubo);
	
return 0;
	
}

