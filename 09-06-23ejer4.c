#include <stdio.h>

int main()
{
	char opcion;
	do
	{
		puts("hiiii");
		puts("desea otro tipo de saludo?\n");
		printf("y acontinuacion pulse intro\n");
		scanf("%c",&opcion);
				
	}
	while((opcion=='S') || (opcion=='s'));
	{
		puts("good bye :)");
		
	}
	return 0;
}
