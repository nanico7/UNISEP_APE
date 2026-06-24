#include <stdio.h>

float media(int v[], int t) {
    int soma = 0;

    for (int i = 0; i < t; i++) {
        soma += v[i];
    }

    return (float)soma / t;
}

int main() {
    int v[5];

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    printf("Media: %.2f\n", media(v, 5));
}