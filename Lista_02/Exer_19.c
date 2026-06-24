#include <stdio.h>

int main() {
    int num;
    int maior = 0;

    printf("Digite numeros (999 para sair)\n");

    do {
        scanf("%d", &num);

        if(num != 999 && num > maior) {
            maior = num;
        }

    } while(num != 999);

    printf("Maior numero: %d", maior);
}