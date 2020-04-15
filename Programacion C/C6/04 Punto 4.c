/*Escribir el código fuente de un programa que desde main se llame a un 
procedimiento que recibe como argumento dos números reales, y muestra 
el menor. */

#include <stdio.h>

void verificar(float z, float x){
	if(z<x){
		printf("\n\nEl menor es: %f",z);
	}
	else{
		printf("\n\nEl menor es: %f",x);
	}
}
	
int main(){
	float a=0, b=0;
	printf("Ingrese 2 numeros:\n");
	scanf("%f %f", &a,&b);
	verificar(a,b);
}
