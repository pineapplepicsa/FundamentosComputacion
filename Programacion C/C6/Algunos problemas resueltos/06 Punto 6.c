//	6) Escriba un procedimiento que ingrese la cantidad de elementos a acumular y muestre el valor
//	acumulado.

#include<stdio.h>

int acumulacion(int x)
{
	int y, con, acu;
	con = 0;
	acu = 0;
	while(con < x)
	{
	printf("Ingrese el valor: ");
	scanf("%d", &y);
	acu = acu + y;
	con++;
	}
return(acu);
}

int main(void)
{
	int x;
	printf("Ingrese la cantidad de elementos a acumular: ");
	scanf("%d", &x);
	printf("Elementos acumulados: %d\n", x);
	printf("Acumulado: %d", acumulacion(x));
return 0;
}

