#include <stdio.h>

char validar(int x){  //
	if(x<0){
		return ('N');
	}
	else{
		return('P');
	}
}

int main(int argc, char *argv[]){
	int a;
	char aux;
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	aux=validar(a);
	printf("\nEL NUMERO ES: %c", aux);
	return 0;
}
