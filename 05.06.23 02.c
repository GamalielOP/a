#include<stdio.h>
int main()
{
	int num_blancos,num_digitos,num_distintos;
	char c;
	switch(c)
	{
	case:'0' :case'1' :case'2' :case'3' :case'4'
	case:'5' case'6':case'7' case'8':case'9'
	num_digitos++;
	case' ':case'\t':case'\n';
	num_blancos++;
	printf ("%c ",num_digitos);
	printf ("%c ",num_blancos);
	break;
	default:
		num_distintos++;
		printf ("%c ",num_distintos);
		break;
	}
}

