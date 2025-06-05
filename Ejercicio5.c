#include <stdio.h>

int main() {
    int numero;
    
    printf("Identificador de números pares e impares\n");
    printf("Ingrese un número entero: ");
    if(scanf("%d", &numero) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    if(numero % 2 == 0) {
        printf("%d es un número par.\n", numero);
    } else {
        printf("%d es un número impar.\n", numero);
    }
    
    return 0;
}
