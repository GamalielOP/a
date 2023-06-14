#include<stdio.h>
int main()
{
	int contador,suma,f,num;
	puts("La suma de los primeros 50 numeros son:");
	do
	{
		contador=num++;
		suma+=contador;
		printf("%d : %d \n",contador, suma);
	}while(contador<50);
}
