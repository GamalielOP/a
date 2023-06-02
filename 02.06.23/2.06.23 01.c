#include<stdio.h>
/*que solicite una calificacion obtenida entre uno y diez,
evalue si es mayor a 6 =aprobado*/
int main()
{
	float calf;
	printf("Ingrese su calificacion");
	scanf("%f",&calf);
	if(calf>0 && calf<10)
	{
	    if(calf<=10 && calf>6)
		{
			printf("Aprobado");
		}
		if(calf<6)
		{
			puts("Reprobado");
		}
	}
	else
	{
		printf("Numero invalidoO");
		}
	return 0;
}
