#include<stdio.h>
#define MAXLON 10

int main(void)
{
	char original[MAXLON+1] = "cadena";
	char copia[MAXLON+1];
	int i;
	for(i = 0; i <= MAXLON; i++)
	{
		copia[i] = original[i];
		if(copia[i] == '\0')
			break;
	}
	printf("La cadena dice: %s", copia);
return 0;
}

