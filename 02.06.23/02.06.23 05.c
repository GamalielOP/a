#include<stdio.h>
#include<math.h>
int main()
{
	//	Eleva x a una potencia negativa y resta a x
float f,x;
printf("\nElige un valor de x");
scanf("%f",&x);	 
if(x<=0.0)
{
	f=-pow(x,2)-x;
	}else{
	f=-pow(x,2)+3*x;
	printf("f(%.1f) = %.3f",x,f);
}
	return 0;
	
}
