#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	float r;
	printf("escriba dos numeros");
	printf("divisor");
	scanf("%d",&a);
	printf("dividendo");
	scanf("%d",&b);
	if(a % b== 0){
		r=a/b;
		printf("es divisible \nFueron %d/%d \n Es igual a %.2f",a,b,r);
	}else{
		r=a/b;
		printf("no es divisible\nFueron %d/%d \n Es igual a %.2f",a,b,r);
	}
	return 0;
}
