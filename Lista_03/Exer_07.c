#include <stdio.h>

int main() {
    int num[10];
    int soma = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);

        soma += num[i];
    }

    printf("Media: %.2f", (float)soma / 10);
}