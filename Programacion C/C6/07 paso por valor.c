#include<stdio.h>

void valNuevo(int * xnum, int * ynum) //puntero a valor de tipo entero
{
	//Se le pasa a la funcion el valor de la direccion de memoria en la que se encuentra un entero
	
	printf("\nEl valor del primer numero mas uno es %d\n", *(xnum)+1);
	printf("El valor del primer numero mas uno es %d\n", *(ynum)+1);
}

int main()
{
	//Se lepasa la direcicion de memoria de y, no el valor
	
	int num1, num2;
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	valNuevo(&num1, &num2);
	printf("\nEl valor de primer numero es %d\n", num1);
	printf("El valor del segundo numero es %d\n", num2);
	
return 0;
}

