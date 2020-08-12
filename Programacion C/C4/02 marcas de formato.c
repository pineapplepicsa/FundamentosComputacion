#include <stdio.h>

//Algunas marcas de formato %d %f %e %hhd y convinaciones con otros recursos
//Breve aclaracion: los corchetes se utilizaran en esta prueba para medir espacios

int main()
{
	printf("A continuacion se hara una muestra de formatos\n");
	int a = 5;
	float b = 1.0;
	char c = 100;
	printf("\nUn entero A: %d, un flotante B: %f, un byte C: %hhd\n", a, b, c);
	
	printf("\nAhora un ejemplo de modificadores de enteros\n");
	printf("\nUn numero positivo: [%6d]",10);
	printf("\nUn numero negativo: [%-6d]",10);
	printf("\nUn numero que empieza con cero: [%06d] \n",10);	
	//El positivo imprime n = 6 espacios dentro del corchete incluyendo el mumero
	//El negativo imprime n = 6 espacios dentro del corchete incluyendo el numero
	//El que empieza con cero imprime 4 ceros antes del numero
	
	printf("\nUn numero positivo: [%+6d] \n",10);
	//Se pueden agregar caracteres siempre en cuando se respeten algunas reglas
	//Bastante inconsistentes (en este caso el signo +)
	
	printf("\nEjemplos con float: \n");
	printf("\nB formato float convencional: %f", b);
	printf("\nB formato float cientifica: %e", b);
	//El float convencional imprime 6 decimales despues del punto por defecto
	//El float cientifico, despues de los decimales imprime una "e" y un valor entero
	printf("\nB con dos decimales: [%.2f]\n", b);
	//Se puede especificar la cantidad de decimales despues del punto
	//En este caso no se especifica el tamaño del corchete
	
	printf("\nEscribir la letra 'a' por medio de el valor ASCII: [%c]", 97);
	printf("\nEscribir la letra 'a' con el valor literal: [%c]", 'a');
	printf("\nPara almacenar cadenas en una variable: [%s]", "una cadena");
	//Se puede imprimir caracteres con el caracter literal o con su posicion ASCII
	//Notese que se pueden incluir comillas simples dentro de la cadena de texto
	//Mas adelante falta probar lo de las cadenas
	
	return 0;
}
