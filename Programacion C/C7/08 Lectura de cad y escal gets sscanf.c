// sscanf recibe, como primer argumento, la cadena en linea; como segundo argumento una cadena con
// marcas de formato; y como tercer parametro, la direccion de la variable escalar en la que se quiere
// depositar el resultado de la lectura.

#include<stdio.h>

int main()
{
	char nombre[20] = "", entrada[81] = "";
	unsigned int edad = 0;
	
	printf("Escriba su nombre y edad, separados por un espacio:\n");
	gets(entrada);
	sscanf(entrada, "%s %u", nombre, &edad);
	
	printf("Has escrito: %s\n", entrada);
	printf("Nombre: %s. Edad: %d\n", nombre, edad);

return 0;
}

