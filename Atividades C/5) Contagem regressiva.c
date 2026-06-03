#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero para a contagem regressiva: ");
    scanf("%d", &num);

    for (int i = num; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\nBOOM!");
    return 0;
}