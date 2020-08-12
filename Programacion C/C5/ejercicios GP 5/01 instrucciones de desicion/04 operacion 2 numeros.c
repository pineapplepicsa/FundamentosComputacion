// Hacer un programa que permita ingresar dos números y el simbolo de la operacion (+,-,*,/).
// obteniendose el correspondiente resultado. Si el simbolo no es correcto debera imprimir un
// mensaje que indique “Error en simbolo”.

// No recibe el scan del signo y pasa directo al switch
// Falta completar el resto del codigo

#include <stdio.h>

int main()
{
	int a, b, resultado;
	float cociente;
	char signo;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &a);
	getchar();
	printf("Ingrese el signo de la operacion: ");
	scanf("%C", &signo);

	switch (signo)
	{
		case '+':
			printf("Ingrese el numero a sumar: ");
			scanf("%d", &b);
			resultado = a + b;
			printf("El resultado de la suma es: %d", resultado);
			break;
		case '-':
			printf("Ingrese el numero a restar: ");
			scanf("%d", &b);
			resultado = a - b;
			printf("El resultado de la resta es: %d", resultado);
			break;
		case '*':
			printf("Ingrese el numero a multiplicar: ");
			scanf("%d", &b);
			resultado = a * b;
			printf("El resultado de la multiplicacion es: %d", resultado);
			break;
		case '/':
			printf("Ingrese el numero que divide al primero: ");
			scanf("%d", &b);
			cociente = a / b;
			printf("El resultado de la cociente es: %f", cociente);
			break;
		default:
			printf("Opcion no valida\n");
			break;
	}
	
return 0;
}

