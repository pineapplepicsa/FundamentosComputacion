// 2. Otra forma con un solo FOR
// Nota: desafio del primer, segundo, etc... lugar superado (H)

#include <stdio.h>
#include <string.h>

char *posicion(int con)
{
	char*lugar;
	switch(con)
		{
			case 0: lugar = "primer";  break;
			case 1:	lugar = "segundo"; break;
			case 2:	lugar = "tercer";  break;
			case 3:	lugar = "cuarto";  break;
			case 4:	lugar = "quinto";  break;
			case 5:	lugar = "sexto";   break;
			case 6:	lugar = "septimo"; break;
			case 7:	lugar = "octavo";  break;
			case 8:	lugar =	"noveno";  break;
			case 9:	lugar = "decimo";  break;
		}
return(lugar);
}

int main()
{
	int sum, num, i, j;
	char *lugar;
	sum = 0;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Ingrese el %s numero: ", posicion(j));
			scanf("%d", &num);
			sum = sum + num;
		}
		printf("El promedio del %s juego es: %.1f", posicion(i), (float)sum/4);
		printf("\n\n");
	}

return 0;
}

