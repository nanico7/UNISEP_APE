#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int contador = 0;

    do {
        printf("Digite uma idade (0 para sair): ");
        scanf("%d", &idade);

        if(idade != 0) {
            soma += idade;
            contador++;
        }

    } while(idade != 0);

    printf("Media = %.2f", (float)soma / contador);
}