/*
Ejerciocio 5
Elaborar un rograma en lenguaje c que resuleva la siguiente seleccion: Apartir de un conderacion asignada con la siguinete escala
A)Exelente B)Notable C)Suficiente D,F)No aplicable para estas notas*/
#include <stdio.h>
int main()
{
	char nota;
	puts("Ingresa tu nota\n");
	puts("A),B),C),D),F)\n");
	scanf("%c",&nota);
	switch(nota)
	{
		case 'A':
		case 'a':
			puts("Exelente");
		break;
		
		case 'B':
		case 'b':
			puts("Notable");
		break;
			case 'C':
		case 'c':
			puts("Suficiente");
		break;
		case 'D':
		case 'd':
			puts("No aplica para esta nota");
		break;
		
			case 'F':
			case 'f':
			puts("No aplica para esta nota");
		break;
		
		default:
			puts("Opcion no valida");
		break;
	}
	
	
}
