#include <stdio.h>

int main()

{
	int i;
	i = 0;
	
	while(i < 10)
	{
		if(i%2 == 0)
		{
			i++;
			continue;
		}
		printf("%d\n", i);
		i++;
	}
	
	for(i = 0; i < 10; i++)
	{
		if(i%2 == 0)
			continue;
			printf("%d\n", i);
	}
	
return 0;
}


// Cada parte del codigo imprime numeros impares del 1 al 9
