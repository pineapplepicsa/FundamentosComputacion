// Otra forma de hacer la calculadora pero con DO WHILE y la variable opc es CHAR XDDDDD

#include <stdio.h>

int main()
{
	int num1, num2;
	char opc;
	
	do
	{
		printf("Menu de opciones");
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Producto\n");
		printf("4. Divicion\n");
		printf("\nS. Salir...\n");
		printf("\nIngrese opcion: ");
		scanf("%d", &opc);
	
		printf("Ingrese el primer numero: ");
		scanf("%d", &num1);

		printf("Ingrese el segundo numero: ");
		scanf("%d", &num2);
		
		switch(opc)
		{
			case '1':
				printf("La suma de los numeros es: %d", num1 + num2);
				break;
			case '2':
				printf("La resta de los numeros es: %d", num1 - num2);
				break;
			case '3':
				printf("El producto de los dos numeros es: %d", num1 * num2);
				break;
			case '4':
				if(num2 == 0)
					printf("No se puede dividir por cero.");
				else
					printf("La divicion de los numeros es: %d", (float)num1/num2);
				break;
			case 's' || 'S':
				printf("Adios");
				break;
			default:
				printf("Opcion invalida");
				break;
		}	
	}
	while (opc != 's' || opc != 'S');

return 0;
}

