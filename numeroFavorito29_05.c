#include <stdio.h>
#include <stdlib.h>
	int main() 
	{
	int Minumero;
	int j;
		printf("¿Cual es su numero favorito?");
		scanf("%d",&Minumero);
		int numerodeiteracciones=6;
		int i;
		for(i=1; i<numerodeiteracciones; ++i){
			printf("Iteracciones numero: %d\n",i*2);
		}
			printf("Cuanto vale aqui la variable i %d\n",i);
			printf("Cuanto vale aqui la variable Minumero %d\n",Minumero);
			printf("Cuanto vale aqui la variable numeroiteracciones %d\n",numerodeiteracciones);
			
	return 0;
}
