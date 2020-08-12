// Escritura de cadenas: sprintf
// Es la operacion complementaria de sscanf. La funcion sprintf se comporta como printf, salvo que no
// escribe texto en pantalla, sino que lo almacena en una cadena.

#include<stdio.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1] = "una";
	char b[MAXLON+1] = "cadena";
	char c[MAXLON+1];
	sprintf(c, "%s %s", a, b);
	printf("%s\n", c);

return 0;
}

