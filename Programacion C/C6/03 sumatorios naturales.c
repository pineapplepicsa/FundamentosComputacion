#include<stdio.h>

int sumatorio(int a, int b)
{
	int i, s; //variables locales a la funcion sumatorio
	s = 0;
	
	for(i=a; i<=b;i++)
		s+=i;
	return s;
}

int main()
{
	int i; //variable local a main
	
	for(i=1;i<=10;i++)
		printf("Suma de %d primeros numeros naturales: %d\n", i, sumatorio(1,i));
		return 0;
}
