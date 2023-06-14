#include<stdio.h>
int cuadrado(int n)
{
	int q=0;
	while(q<=1000)
	{
		q=n*n;
		printf("El cuadrado de:%d es %d\n",n,q);
		n++;
	}
	return 0;
}

int main()
{
	int n=0;
	cuadrado(n);
	return 0;
}
