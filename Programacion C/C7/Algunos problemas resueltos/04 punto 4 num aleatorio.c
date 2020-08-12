/* 4. La cabecera incluye la declaracion de funciones para generar numeros aleatorios. La funcion rand,
	  que no tiene parametros, devuelve un entero positivo aleatorio.
	  Si desea generar numeros aleatorios entre 0 y un valor dado, se puede evaluar rand 1. Cuando se
	  ejecuta un programa que usa rand, la semilla del generador de numeros aleatorios es siempre la
	  misma, asi que se obtiene la misma secuencia de numeros aleatorios. Se puede cambiar la semilla del
	  generador de numeros aleatorios pasandole a la funcion srand un numero entero sin signo.
	  Usa el generador de numeros aleatorios para inicializar un vector de 10 elementos con numeros
	  enteros entre 0 y 4. Mostrar por pantalla el resultado. Detectar y mostrar, a continuacion, el
	  tamaño de la sucesion mas larga de numeros consecutivos iguales.
	  (ejemplo: si los numeros generados son 0, 4, 3, 3, 2, 1, 3, 2, 2, 2, el tramo mas largo formado por
	  numeros iguales es de talla 3 (los tres dos al final de la secuencia), asi que por pantalla
	  aparecera el valor 3).  */
	  
#include<stdio.h>
#define N 10

int main(void)
{
	int vec[N];
	int i, z;

	for(i = 0; i < N; i++)
	{
		vec[i] = rand() % 5;
		printf("\n%d, ", vec[i]);
	}

return 0;
}

//Este programa imprime siempre la misma serie de numeros aleatorios
