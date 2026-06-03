#include <stdio.h>

int main() {

    int numero, i;
    int fatorial = 1;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    for(i = numero; i >= 1; i--) {
        fatorial = fatorial * i;
    }

    printf("\nO fatorial de %i é %i", numero, fatorial);
}