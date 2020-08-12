// 1. Escribir un algoritmo que lea un numero y escriba su cuadrado

#include <stdio.h> //------------------------------------------> incluyo libreria stdio.h

int main()
{
	int a;			//-----------------------------------------> Declaro variables de trabajo
	int cuadrado;   //
	
	printf("Ingrese el numero a calcular el cuadrado\n");//----> Muestro en pantalla el mensaje
	//															 solicitando el ingreso de datos
	scanf("%d", &a); //----------------------------------------> ingreso el dato
	
	cuadrado = a * a; //---------------------------------------> Calculo el cuadrado
	
	printf("El resultado del cuadrado es %d\n", cuadrado); //--> Muestro el resultado por pantalla
	
return 0;

}

