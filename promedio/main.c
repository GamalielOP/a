#include <stdio.h>
#define A 2
int main(){
	float r=0,c[A];
	int i;
	for(i=0;i<A;i++){
		printf("%d: ",i+1);
		scanf("%f",&c[i]);
		r+=c[i];
	}
	printf("\n divicion");
	for(i=0;i<A;i++){
		printf("\n uno X uno:%.2f",c[i]/A);
	}
	printf("\nPromedio:%.2f",r/A);
	return 0;
}
