#include <stdio.h>
#include <stdlib.h>
#define A 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a[A]={10,1,2,3,-100,1000,-200,7,1,0};
	int mayor,i,r=0;
	for(i=0;i<A;i++){
		if(a[i]>a[r]){
			mayor=i;
			printf("\n num: %d",a[i]);
			printf("\n sub: %d \n",r);
		}
	}
	return 0;
}
