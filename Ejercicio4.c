#include <stdio.h>

int main() {
    float celsius;
    
    printf("Conversor de Celsius a Fahrenheit\n");
    printf("Ingrese la temperatura en Celsius: ");
    if(scanf("%f", &celsius) != 1) {
        printf("Error: Ingrese un número válido.\n");
        return 1;
    }
    
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f°C equivalen a %.2f°F\n", celsius, fahrenheit);
    
    return 0;
}
