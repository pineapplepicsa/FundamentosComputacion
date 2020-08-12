// Imprime la nomenclatura de la matriz

#include<stdio.h>

int main()
{
	int i;				//---------> La variable i tiene un ambito que engloba al de j
	for(i=0;i<3;i++)
	{
		int j;							//
		for(j=0;j<3;j++)				//------> La variable j solo existe en el bloque
			printf("%d-%d ", i, j);		//
		printf("\n");
	}
	return 0;
}
