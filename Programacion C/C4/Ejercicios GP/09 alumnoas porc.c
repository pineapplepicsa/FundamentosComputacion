// 9. Un maestro desea saber que porcentaje de hombres y que porcentaje de mujeres hay en un grupo
//	  de alumnos.

//No funciona la funcion de division, el resultado da siempre cero

#include <stdio.h>

int main()

{
	int h, m, t;
	float ph, pm;
	
	printf("Ingrese cantidad de alumnos: ");
	scanf("%d", &h);
	printf("\nIngrese cantidad de alumnas: ");
	scanf("%d", &m);
	
	t = h + m;
	ph = h / t * 100;
	
	printf("El porcentaje de hombres es: %f", ph);
	printf("El porcentaje de mujeres es: %f", pm);	

return 0;
}

