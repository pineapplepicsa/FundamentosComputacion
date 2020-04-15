//Modifique el programa anterior para realizarlo con un procedimiento.

#include <stdio.h>

void validar(){  //Esto es un procedimiento (funcion sin parametros)
	int numero=0;
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	if(numero<0){
		printf("\nNegativo");
	}
	else{
		printf("\nPositivo");
	}
}

int main(int argc, char *argv[]){
	validar();
	
	return 0;
}
