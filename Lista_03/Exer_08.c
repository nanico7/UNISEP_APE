#include <stdio.h>

int main() {
    int num[10];
    int soma = 0;
    float media;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);

        soma += num[i];
    }

    media = (float)soma / 10;

    printf("\nMedia = %.2f\n", media);
    printf("Numeros maiores que a media:\n");

    for(int i = 0; i < 10; i++) {
        if(num[i] > media) {
            printf("%d\n", num[i]);
        }
    }
}