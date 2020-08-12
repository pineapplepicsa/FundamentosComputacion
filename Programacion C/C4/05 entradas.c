#include <stdio.h>

// CODIGOS DE FORMATO DE ENTRADAS:

// %d    int
// %u    unsigned int
// %f    float
// %hhd  char como entero
// %c    char como caracter
// %hhu  unsigned char como entero
// %c    unsigned char como caracter

int main()
{
	char linea;
	printf("Asigne una cadena a la variable linea: \n");
	scanf("%s", linea);
	printf("linea es: %s", linea);
	
	//Otra forma valida de hacer lo mismo
	//Aunque en la teoria dice que se limita la cadena y no lo hace en la practica (limite 4 caracteres)
	
	/*char linea [4];
	puts("nombre y direccion");
	gets(linea);
	printf(linea);*/
	
	return 0;
}
