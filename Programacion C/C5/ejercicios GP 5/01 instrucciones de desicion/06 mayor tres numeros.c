// 5. Escriba un programa capaz de encontrar el mas alto de tres valores (R S y T)
// Nota: no lo hice como la consigna, lo hice mas facil hue
// Reminder: hacer de nuevo acatando la consigna... NEXT!

#include <stdio.h>

int main()
{
	int temporal, asignado;
	
	printf("Ingrese el primer valor: ");
	scanf("%d", &asignado);
	printf("\nIngrese el segundo valor: ");
	scanf("%d", &temporal);

	if(asignado < temporal)
		asignado = temporal;

	printf("\nIngrese el tercer valor: ");
	scanf("%d", &temporal);

	if(asignado < temporal)
		asignado = temporal;

	printf("\nEl mayor valor es: %d", asignado);
	
return 0;
}
