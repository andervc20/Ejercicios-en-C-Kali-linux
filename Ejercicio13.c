#include <stdio.h>

int main() {
    int numero, original, contador = 0;
    
    printf("Contador de dígitos\n");
    printf("Ingrese un número entero: ");
    if(scanf("%d", &numero) != 1) {
        printf("Error: Ingrese un número entero válido.\n");
        return 1;
    }
    
    original = numero;
    
    // Manejar el caso del 0
    if(numero == 0) {
        contador = 1;
    } else {
        // Contar dígitos para números positivos y negativos
        while(numero != 0) {
            numero /= 10;
            contador++;
        }
    }
    
    printf("El número %d tiene %d dígito(s).\n", original, contador);
    
    return 0;
}
