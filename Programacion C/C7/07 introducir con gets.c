// con gets se puede introducir espacios

#include<stdio.h>
#define MAXLON 11

int main(void)
{
	char a[MAXLON+1], b[MAXLON+1];
	printf("Introduce una cadena: ");
	gets(a);
	printf("Introduce una cadena: ");
	gets(b);
	printf("La primera es %s y la segunda es %s\n", a, b);
	
return 0;
}

