#include <stdio.h>

void encontrar_mayor(int *num1, int *num2) {
    if (*num1 > *num2) {
        printf("El numero mas grande es: %d\n", *num1);
    } else {
        printf("El numero mas grande es: %d\n", *num2);
    }
}

int main() {
    int n1,n2;
    puts("escriba dos numeros a comparar");
    scanf("%d %d",&n1 ,&n2);
    encontrar_mayor(&n1, &n2);
    return 0;
}

