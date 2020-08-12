#include<stdio.h>
#define talla 5

int main(void)
{
	int a[talla];
	printf("Un elemento de a ocupa en bytes: %d\n", sizeof(a[0]));
	printf("El vector a ocupa en bytes: %d", sizeof(a));

return 0;
}

