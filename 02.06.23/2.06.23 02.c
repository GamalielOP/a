/*que diga si un numero es mayor MENOR O IGUAL A 0 con la funcion SI simple*/
#include<stdio.h>
int main()
{
	int num;
	printf("Ingrese su numero");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Numero menor a 0");
	}
	if(num==0)
	{
		puts("Numero igual a 0");
	}
	if(num>0)
	{
		puts("Numero mayor a 0");
	}
	return 0;
}
