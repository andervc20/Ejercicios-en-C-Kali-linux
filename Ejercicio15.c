#include <stdio.h>

int main() {
    int n;
    
    printf("Generador de serie Fibonacci\n");
    printf("Ingrese el número de términos: ");
    if(scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: Ingrese un número entero positivo válido.\n");
        return 1;
    }
    
    printf("Serie Fibonacci con %d términos:\n", n);
    
    int a = 0, b = 1, c;
    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    
    return 0;
}
