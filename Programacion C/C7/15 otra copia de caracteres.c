// otra copia de cadenas

#include<stdio.h>
#include<string.h>
#define MAXLON 10

char *posicion(int con)
{
	char *lugar;
	switch(con)
		{
			case 0: lugar = "Primer "; break;
			case 1:	lugar = "Segundo"; break;
			case 2:	lugar = "Tercer "; break;
			case 3:	lugar = "Cuarto "; break;
			case 4:	lugar = "Quinto "; break;
			case 5:	lugar = "Sexto  "; break;
			case 6:	lugar = "Septimo"; break;
			case 7:	lugar = "Octavo "; break;
			case 8:	lugar =	"Noveno "; break;
			case 9:	lugar = "Decimo "; break;
		}
return(lugar);
}

int main(void)
{
	int i, j;
	i = 0;
	j = 0;

	char original[MAXLON+1] = "cadena";
	printf("Contenido de original: %s \n", original);
	char copia[MAXLON+1];
	
	while(original[i] != '\0')
	{
		copia[i] = original[i];
		printf("%s print: %s.\n", posicion(j), copia);
		i++;
		j++;
	}
	copia[i] = '\0';

	printf("Contenido de copia: %s.", copia);

return 0;
}

