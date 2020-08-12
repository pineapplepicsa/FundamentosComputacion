// 1. Un estudiante realiza cuatro examenes, los cuales tienen la misma ponderacion. Realizar un programa
//	  que permita obtener el promedio de las calificaciones obtenidas.

#include <stdio.h>

int main (int argc, char * argv[])

{
	int a, b, c, d;
	float promedio;
	
	printf("Ingrese la calificacion del primer examen \n");
	scanf("%d", &a);
	printf("Ingrese la calificacion del segundo examen \n");
	scanf("%d", &b);
	printf("Ingrese la calificacion del tercer examen \n");
	scanf("%d", &c);
	printf("Ingrese la calificacion del cuarto examen \n");
	scanf("%d", &d);
	
	promedio = (float)(a + b + c + d)/4;
	
	printf("Las calificaciones fueron %d %d %d %d \n", a, b, c, d);
	printf("El promedio sera de: %f\n", promedio);
	
return 0;

}

