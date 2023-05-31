#include <stdio.h>
#include <stdlib.h>
int main()
{
	int edad, MayorEdad, juvenil;
	scanf("%i",&edad);
	 if (edad>18){
	 	printf("Eres MAYOR");
	 }
	 else if(edad<15 && edad<=18){
	 	printf("Eres MENOR");
	 }
	 

	return 0;
}
