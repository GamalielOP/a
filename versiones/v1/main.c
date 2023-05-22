#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int numero=7,x ;
	printf("adivina el numero");
	scanf("%d",&x);
	if(x==numero){
	printf("\n correcto");
	}else{
		printf("\n incorrecto");
	}
	return 0;
}
