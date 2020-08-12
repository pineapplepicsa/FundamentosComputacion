// 5. Convertir una temperatura dada en la escala Celsius e imprimase en su equivalente Fahrenheit.
//	  Ayuda: (F = (9/5) C + 32)

#include <stdio.h>

int main()

{
	float c, f;
	
	printf("Ingrese temperatura en Celsius: ");
	scanf("%f", &c);
	
	f = (9/5) * c + 32;
	
	printf("La temperatura en Fahrenheit sera de: %f", f);

return 0;
}

