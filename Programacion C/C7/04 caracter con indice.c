#include<stdio.h>
#define MAXLON 80

int main(void)
{
	char cadena[MAXLON+1] = "una cadena";
	int i;
	i = 0;
	while(cadena[i] != '\0')
	{
		printf("%c\n", cadena[i]);
		i++;
	}
return 0;
}

