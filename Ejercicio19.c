#include <stdio.h>
#include <math.h>

int esArmstrong(int n) {
    int original = n, suma = 0;
    
    while(n > 0) {
        int digito = n % 10;
        suma += pow(digito, 3);
        n /= 10;
    }
    
    return suma == original;
}

int main() {
    printf("Números Armstrong de 3 cifras (100-999):\n");
    
    for(int i = 100; i <= 999; i++) {
        if(esArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
