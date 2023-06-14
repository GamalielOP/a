#include<stdio.h>
int main()
{
	int numero,primo=0,i,a;
	do
	{
	printf("Ingrese numero");
	scanf("%d",&numero);	
	for ( i=1; i<=numero; i++)
	{
		if(numero % i == 0)
		{
			primo++;
		}
	}
	if(primo==2){
		printf("Es primo\n");
	}
	else{
		printf("No es primo\n");
	}
	printf("desea continuar\n");
	scanf("%d",&a);
	}while(a!=1);
	
	return 0;
}
