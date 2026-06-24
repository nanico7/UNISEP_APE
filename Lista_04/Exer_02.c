#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (parOuImpar(num) == 1)
        printf("Par\n");
    else
        printf("Impar\n");
}

    int parOuImpar(int n) {
     if (n % 2 == 0)
        return 1;
     else
        return 0;
}