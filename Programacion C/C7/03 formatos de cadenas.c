#include<stdio.h>
#define MAXLON 80

int main()
{
	char cadena[MAXLON+1] = "una cadena";
	printf("El valor de cadena es: (%20s).\n", cadena);
	printf("El valor de cadena es: (%-20s).\n", cadena);
	printf("El valor de cadena es: %s.\n", cadena);

return 0;
}

