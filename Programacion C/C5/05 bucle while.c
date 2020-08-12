// Este ejemplo calcula potencias

#include <stdio.h>

int main()
{
	int x, n, i, r;
	printf("x: "); scanf("%d", &x);
	printf("n: "); scanf("%d", &n);
	r = 1;
	i = 0;
	
	while (i < n)				//Los parentesis pueden suprimirse si el bloque tiene una sola sentencia
	{
		r *= x;
		i++;
	}
	
	printf("%d**%d %d\n", x, n, r);
	
return 0;
}

