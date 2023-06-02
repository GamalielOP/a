#include<stdio.h>
int main()
{
	float a,c,b;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if(a>0)
		if(b>0)++a;
		else
			if(c>0)
				if(a<5)++b;
				else
					if(b<5)++c;
					else --a;
				else if(c<5)--b;
			else--c;
		else a= 0;
		printf("%f",a,b,c);
}
