#include<stdio.h>
int main()
{
	int suma,xo;
	while(xo!= -1)
	{
		printf("Ingrese numeros\n");
		scanf("%d",&xo);
		suma+=xo;
	}
	printf("suma total es: %d",suma);
	return 0;
}
