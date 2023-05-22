#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int intento=10,x=1,i;
	while(x==1){
		printf("escribe tu numero de intento");
		scanf("%d",&i);
		
		if(i==intento){
			printf("gracias \n");
			break;
		}else{
			
			printf("quieres continuar..?\n si(1) \n no(2)");
			scanf("%d",&x);
		}	
	}

	return 0;
}
