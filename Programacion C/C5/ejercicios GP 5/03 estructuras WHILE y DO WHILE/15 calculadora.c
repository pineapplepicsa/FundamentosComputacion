// 15. Disenar un programa que permita mostrar en pantalla una rutina de seleccion del siguiente menu:
// 1. Suma, 2. Resta, 3. Producto, 4. Division, S. Salir. El usuario podra elegir cualquier alternativa,
// luego ingresar A y B y realizar la operacion seleccionada. Solamente con "S" podra Salir. Tener en
// cuenta que si elige 4. Division debera reingresar el denominador hasta que ingrese un calor diferente
// a 0 (cero). Si ingresa un numero negativo o mayor que 4 debera informar "Opcion no valida".

// Nota: No puedo poner S en la variable entera opc
// Si no se ingresa un entero se imprimen de segudo las solicitudes de numeros

#include <stdio.h>

int main()
{
	int opc, num1, num2;
	float div;
	printf("Menu de opciones\n");
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
		case 1:
			printf("La suma de los numeros es: %d", num1 + num2);
			break;
		case 2:
			printf("La resta de los numeros es: %d", num1 - num2);
			break;
		case 3:
			printf("El producto de los dos numeros es: %d", num1 * num2);
			break;
		case 4:
			if(num2 == 0)
				printf("No se puede dividir por cero.");
			else
				printf("La divicion de los numeros es: %d", (float)num1/num2);
			break;/*
		case 's' || 'S':
			printf("Adios");
			break;*/
		default:
			printf("Opcion invalida");
			break;
	}

return 0;
}

