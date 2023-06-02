#include<stdio.h>
int main()
{
	float num;
	printf("Ingrese su numero");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Numero es negativo, este vale:%.1f",num);
	}else{
		if(num>0){
			printf("Numero es positivo, este vale:%.1f",num);
		}else{
			printf("Numero es neutro, este vale:%.1f",num);
		}
	}
	
}
