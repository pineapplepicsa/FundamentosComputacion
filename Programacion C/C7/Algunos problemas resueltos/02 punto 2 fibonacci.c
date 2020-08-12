/* 2. Escribir un programa C que almacene en un vector los 10 primeros numeros de Fibonacci.
Una vez calculados, el programa los mostrará por pantalla en orden inverso. */

#include<stdio.h>
#define N 10

int main(void)
{
	int i, vec[N+1];
	//Inicializo los primeros valores para facilitar el for
	vec[0] = 0;
	vec[1] = 1;
	
	for(i = 2; i < N; i++)
		//Literalmente asigna a la posicion actual
		//una suma del anterior con el anterior a ese
		vec[i] = vec[i-1] + vec[i-2];
	
	printf("Serie de fibonacci de %d numeros al reves: ", N);
	//Como en este caso la serie debe imprimirse al reves,
	//el formato del parensesis sera distinto
	for(i = N-1; i >= 0; i--)
		printf("%d, ", vec[i]);

return 0;
}

