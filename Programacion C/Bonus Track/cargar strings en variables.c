#include <stdio.h>
#include <string.h>

main()
{
	char texto[]="Gandalf";
	int longitud;
	longitud = strlen(texto);
	printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
}

