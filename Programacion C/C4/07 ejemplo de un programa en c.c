#include <stdio.h> //--------------------------------------->Libreria para poder usar printf y scanf
int main () //---------------------------------------------->Funcion principal
{
	// El programa tiene un problema imprimiendo la variable edad como entero
	
	char nombre[10];	//
	char apellido[15];	//---------------------------------->Declaracion de las variables de trabajo
	int edad;			//
	
	printf("ingrese nombre");  //--------------------------->Mensaje de pantalla para pedir el ingreso
	scanf("%s", nombre);	   //							 de la variable nombre y su ingreso
		
	printf("ingrese apellido");  //------------------------->Mensaje de pantalla para pedir el ingreso
	scanf("%s", apellido);		 //							 de la variable apellido y su ingreso
	
	printf("ingrese edad");		//-------------------------->Mensaje de pantalla para pedir el ingreso
	scanf("%d", &edad);			//							 de la variable edad y su ingreso
	
	printf("Nombre introducido: %s \n", nombre);     //
	printf("Apellido introducido: %s \n", apellido); //----->Salida por pantalla de los valores ingresados
	printf("Edad introducida: %d \n, edad");		 //
	
	return 0;
}

//Todo lo que esta dentro de la llave es el cuerpo del programa
