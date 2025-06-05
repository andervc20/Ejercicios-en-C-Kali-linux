#include <stdio.h>

int main() {
    int numero;
    
    printf("Generador de tablas de multiplicar\n");
    printf("Ingrese un número entero: ");
    if(scanf("%d", &numero) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    printf("Tabla de multiplicar del %d:\n", numero);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}
