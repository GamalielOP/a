#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero=1234, x;
	printf("escribe el numero secreto \n");
	scanf("%d",&x);
	if(numero>x){
		printf("El numero es menor al numero secreto");
	}if(numero<x){
		printf("El numero es mayor al numero secreto");
	}
	return 0;
}
