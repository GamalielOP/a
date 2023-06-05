/*05.06.23 02 
editar y depurar el ejercicio 2 y describir la variante en el uso de case*/
/*Describir 
la variable de case:
*/

int main()
{
	int opcion;
	puts("Ingrese numero");
	scanf("%i",&opcion);
	switch (opcion)
	{
		case 0:
		case 1:
		case 2:
		printf("menor de tres...");
		break;
		case 3:
		puts("Igual a tres");
		break;
		default:
			puts("fuera de rango");
	}
}
	
