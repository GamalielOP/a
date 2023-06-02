/*calcular de dos numeros por teclado y visualizarlos con el si simple*/
#include<stdio.h>
int main(){
	float a,b;
	puts("Ingrese numero1 y numero2");
	scanf("%f",&a);
	scanf("%f",&b);
	if(a>b)
	{
	printf(" %.2f es numero Mayor a %.2f",a,b);	
	}
	if(a<b)
	{
	printf(" %.2f es numero Mayor a %.2f",b,a);	
	}
	if(a==b)
	{
	 puts("Numeros iguales ");
	}
}
