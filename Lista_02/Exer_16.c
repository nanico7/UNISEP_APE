#include <stdio.h>

int main() {
    int num;
    int soma = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);

        soma += num;

    } while(num != 0);

    printf("Soma = %d", soma);
}