#include <stdio.h>

void mostrar_datos(char nombre[], char *direccion) {
    printf("Nombre: %s\n", nombre);
    printf("Dirección: %s\n", direccion);
}

int main() {
    char nombre[] = "Gamaliel";
    char direccion[] = "Calle, Tlaxcala";
    mostrar_datos(nombre, direccion);
    return 0;
}

