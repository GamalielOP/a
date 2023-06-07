#include<stdio.h>
//Entrada de datos numericos, dcentinela -1
int main()
{
	int const centinela=-1;
	int suma, cuenta,nota;
	printf("introduzca la primera nota");
	scanf("%d",&nota);
	while (nota!=centinela)
	{
		cuenta++;
		suma+=nota;
		printf("intoduzca la siguiente nota");
		scanf("%d",&nota);
	} // fin de while
}



