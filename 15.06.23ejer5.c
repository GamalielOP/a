#include <stdbool.h>

bool dividir(int num1, int num2) {
    return num2 % num1 == 0;
}

int main() {
    int n1,n2;
    puts("Escriba dos mumeros");
    scanf("%d %d",&n1,&n2);
    bool resultado = dividir(n1, n2);
    printf(resultado ? "Verdadero\n" : "Falso\n");
    return 0;
}

