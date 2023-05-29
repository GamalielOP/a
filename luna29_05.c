#include <stdio.h>
#include <stdlib.h>
 	int main()
 	{
 		const int luna=238857;
 		float luna_kilo;
 		printf("Distancia a la luna %d millas\n",luna);
 		luna_kilo=luna*.609;//una milla es igual a 1.609 kilometro
 		printf("En kilometros es %.2f \n",luna_kilo);
	return 0;
}
