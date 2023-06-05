#include<stdio.h>
int main()
{
	int tauto,cambio,dinero;
	printf("Bienvenido a Casetas Shao :)");
	printf("Ingrese el tipo de vehiculo\n");
	printf("1:Particular\n 2: Autobus\n 3:Motocicleta\n 4:salir\n");
	scanf("%d",&tauto);
	switch(tauto)
	{
		case 1:
			printf("Su costo a pagar sera de $500\n ¿Cuanto dara?\n");
			scanf("%d",&dinero);
			cambio=dinero-500;
			printf("Su cambio sera de %d ",cambio);
			break;
		case 2:
			printf("Su costo a pagar sera de $600\n ¿Cuanto dara?\n");
			scanf("%d",&dinero);
			cambio=dinero-600;
			printf("Su cambio sera de %d ",cambio);
			break;
		case 3:
			printf("Su costo a pagar sera de $100\n ¿Cuanto dara?\n");
				scanf("%d",&dinero);
			cambio=dinero-100;
			printf("Su cambio sera de %d ",cambio);
			break;
		default:
		printf("gracias por su visita :=)");		
	}
}
