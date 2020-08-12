/* ACTIVIDAD

Implementar un programa que lea por teclado una linea de texto y muestre por pantalla una cadena en la
que las secuencias de blancos de la cadena original (espacios en blanco, tabuladores, etc.) se han
sustituido por un solo espacio en blanco.

Si, por ejemplo, el programa lee la cadena "una cadena con blancos", mostrara por pantalla la cadena
((normalizada)) "una cadena con blancos".

RESOLUCION:
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAXLON 80

int main(void)
{
	char a[MAXLON+1], b[MAXLON+1];
	int longitud, i, j;
	printf("Introduce una cadena (max. de %d caracteres): ", MAXLON);
	gets(a);
	longitud = strlen(a);
	b[0] = a[0];
	j = 1;
	
	for(i = 1; i < longitud; i++)
		if(!isspace(a[i]) || (isspace(a[i]) && !isspace(a[i-1])))
			b[j++] = a[i];
	b[j] = '\0';
	
	printf("La cadena normalizada es %s\n", b);

return 0;
}

// Por alguna razon no normaliza bien cuando aparecen algunos casos con tabulacion
