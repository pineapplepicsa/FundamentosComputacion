// 4. Escribir un algoritmo que intercambie dos valores numericos ingresados por teclado.

# include <stdio.h>
#define pi 3.14

int main (int argc, char * argv[])

{
	int a, b, c;
	
	printf("Ingrese el primer valor \n");
	scanf("%d", &a);
	printf("Ingrese el segundo valor \n");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("El valor intercambiado es %d %d \n", a, b);
	
return 0;

}

