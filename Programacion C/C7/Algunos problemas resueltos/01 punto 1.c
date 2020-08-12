/*1. Declarar e inicializar un vector de 100 elementos de modo que los componentes de indice par valgan 0
y los de indice impar valgan 1.*/

#include<stdio.h>
#define MAX 100

int main(void)
{
	int vec[MAX+1];
	int i, resto;
	
	//indice par = 0; indice impar = 1;
	for(i = 0; i < MAX; i++)
	{
		resto = i % 2; //divide por 2, si sobra uno es impar
		if(resto == 0) //si no sobra nada es par
			vec[i] = resto;
		else
			vec[i] = resto;
		// printf("%d\n",resto);
	}
	
	printf("El contenido del vector es: ");
	
	for(i = 0; i < MAX; i++)
		printf("%d", vec[i]);
	
	printf("\nSu longitud sera de: %d", i);

return 0;
}

//En este programa no pude usar strlen porque por alguna razon no puedo agregar el caracter nulo
