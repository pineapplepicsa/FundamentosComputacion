/* Para definir una funcion sin parametros se coloca la palabra void como contenido de la lista de
parametros por ejemplo:		*/

int dado(void)
{
	return rand() %6+1;
}

//Los procedimientos C se declaran como funciones con tipo de retorno void
//imprimir un mensaje por pantalla, modificar variables globales o modificar el valor de parametros

#include<stdio.h>

void saludo(void)
{
	printf("Hola Mundo \n");
}

