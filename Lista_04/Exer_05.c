#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float c;

    printf("Digite temperatura em Celsius: ");
    scanf("%f", &c);

    printf("Fahrenheit: %.2f\n", celsiusParaFahrenheit(c));
}