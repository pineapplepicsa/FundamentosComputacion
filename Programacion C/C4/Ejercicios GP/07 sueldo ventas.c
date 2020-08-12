// 7. El sueldo neto de un vendedor se calcula como la suma de un sueldo basico de $250 mas el 12%
//	  del monto total vendido. Diseñe un algoritmo que deremine el sueldo neto de un vendedor conociendo
//	  el monto de las tres ventas que hizo en el mes.

//Siguen sin funcionar las operaciones

#include <stdio.h>
#define doce 0.12

int main()

{
	int ventas;
	float sueldo;
	
	printf("ingrese las ventas realizadas: ");
	scanf("%d", &ventas);
	
	sueldo = 250 + ventas + ventas * doce;
	
	printf("El sueldo es de: %f", sueldo);
	
return 0;
}

