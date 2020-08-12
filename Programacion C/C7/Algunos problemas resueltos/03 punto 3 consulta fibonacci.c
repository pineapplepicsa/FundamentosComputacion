/* 3. Escribir un programa C que almacene en un vector los 50 primeros numeros de fibonacci.
Una vez calculados, el programa pedira al usuario que introduzca un numero y dira si es o no es uno de
los 50 primeros numeros de FIbonacci. */

#include<stdio.h>
#define N 50

int main(void)
{
	int i, busqueda;
	int vec[N+1];
	int bandera;
	vec[0] = 0;
	vec[1] = 1;
	
	//Lleno el vector con serie de fibonacci
	for(i = 2; i < N; i++)
		vec[i] = vec[i-1] + vec[i-2];
	
	/* Imprimo la serie para comprobar su funcionamiento
	for(i = 0; i < N; i++)
		printf("%d\n", vec[i]); */
	
	printf("Inserte numero a buscar: ");
	scanf("%d", &busqueda); // No olvidar el ampersant
	
	//Recorre el arreglo buscando el valor ingresado
	for(i = 0; i < N; i++)
	{
		if(vec[i] == busqueda) //Comprueba si el valor del indice es equivalente al valor ingresado
		{
			bandera = 1; //Esta asignacion le dice al programa si el valor esta o no
			i = N; //Con esta sentencia le digo al for que finalice la iteracion
		}
		else
			bandera = 0; //Esta sentencia permite que el for siga iterando
	}
	
	//En caso de que el valor ingresado se encuentre en la serie se dispara el if de arriba
	//En caso de que el valor ingresado no se encuentre en la series se dispara el else
	
	if(bandera == 1)
	{
		//Este for imprime todos los valores hasta encontrar el valor encontrado
		for(i = 0; i < N; i++)
		{
			if(vec[i] != busqueda)
				printf("%d\n", vec[i]);
			else
			{
				printf("[%d] aca esta\n", vec[i]);
				i = N;
			}
		}
	}
	else
		//Si el valor no se encuentra simplemente imprime el mensaje de abajo
		printf("El valor no se encuentra en la serie de fibonacci.");

return 0;
}

