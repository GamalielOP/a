/*05.06.23
Ejercicio 1 
(1)editar y depurar el siguiente ejercicio,
 (2)agregar una instriccion printf con el mensaje ' se introdujo la variable',
 (3)describir la estructura de la funcion switch*/
 
 /*FUNCION SWITCH
 estructura:
 Argumento de switch en el cual introduces el valor de la comparacion
 donde esta se hace en la palabra reservada"case" y se cumple su valor es verdadero*/
 #include<stdio.h>
 int main()
 {
 	int opcion;
 	puts("Ingrese numero\n");
 	scanf("%d",&opcion);
 	puts("Se introdujo la variable\n");
 	switch (opcion)
 	{
 		case 0:
 		puts("cero");
 		break;
 		case 1:
 		puts("uno");
 		break;
 		case 2:
 		printf("dos");
 		break;
 		case 3:
 		puts(" tres");
 		break;
 		default:
 			puts("Fuera de rango");
	}
 }
