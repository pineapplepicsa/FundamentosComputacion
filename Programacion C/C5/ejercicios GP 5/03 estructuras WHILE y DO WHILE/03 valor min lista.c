// 3. leer una lista de numeros que finaliza cuando se ingresa el numero 0 (cero), al finalizar emitir
// el valor minimo de la lista.

#include <stdio.h>

int main()
{
	int min, num1;
	printf("Ingrese un numero: ");
	scanf("%d", &num1);
	min = num1;
	
	while(num1 != 0)
	{
		if(num1 < min)
			min = num1;
		printf("Ingrese un numero: ");
		scanf("%d", &num1);
	}
	
	printf("El minimo valor ingresado es [%d]", min);

return 0;
}

