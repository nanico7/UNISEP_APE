#include <stdio.h>

int quadrado(int n) {
    return n * n;
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Quadrado: %d\n", quadrado(num));

    return 0;
}