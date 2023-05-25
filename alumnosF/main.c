#include <stdio.h>

#define ALUMNOS 5
#define CALIFICACIONES 5

//funcion de ingresar datos
void ingresarCalificaciones(int calificaciones[][CALIFICACIONES]) {
    int i, j;

    for (i = 0; i < ALUMNOS; i++) {
        printf("Alumno %d:\n", i + 1);
        for (j = 0; j < CALIFICACIONES; j++) {
            printf("Ingrese la calificacion %d: ", j + 1);
            scanf("%d", &calificaciones[i][j]);
        }
    }
}
//funcion de promedio
void calcularPromedios(const int calificaciones[][CALIFICACIONES], float promedios[]) {
    int i, j;

    for (i = 0; i < ALUMNOS; i++) {
        int suma = 0;
        for (j = 0; j < CALIFICACIONES; j++) {
            suma += calificaciones[i][j];
        }
        promedios[i] = (float) suma / CALIFICACIONES;
    }
}
// funcion de imprecion promedios
void mostrarPromedios(const float promedios[]) {
    int i;

    printf("\nPromedios:\n");
    for (i = 0; i < ALUMNOS; i++) {
        printf("Alumno %d: %.2f\n", i + 1, promedios[i]);
    }
}

int main() {
    int calificaciones[ALUMNOS][CALIFICACIONES];
    float promedios[ALUMNOS];

    ingresarCalificaciones(calificaciones);
    calcularPromedios(calificaciones, promedios);
    mostrarPromedios(promedios);

    return 0;
}
