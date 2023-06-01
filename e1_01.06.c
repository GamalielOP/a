#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// visualisar el gasto de luz electrica ,para un gasto menor es 1,2 entre 1000 y 1980 consumes 1.8 y mayor a 1850 consumes 2.1
int main(int argc, char *argv[]) {
	int kw,consumo_a,consumo_b;
	float precio;
	printf("ingrese el consumo actual \n");
	scanf("%d",&consumo_a);
	printf("ingrese el consumo anterior \n");
	scanf("%d",&consumo_b);
	
	if(consumo_b<consumo_a){
		kw=consumo_a-consumo_b;
		if(kw<=1000){
			precio=1.2;
			printf("tu consumo es %d  y el precio %.2f \n",kw, precio);
		}if(kw>1000 && kw<=1850){
			precio=1.8;
			printf("tu consumo es %d  y el precio %.2f \n",kw, precio);
		}if(kw>1850){
			precio=2.1;
			printf("tu consumo es %d  y el precio %.2f \n",kw, precio);
		}
	}else{
		printf("Losentimos no pidimos validar su consumos \n conprueve que ingresaste los nnumeros correctos");
	}
	
	 
	
	
	return 0;
}
