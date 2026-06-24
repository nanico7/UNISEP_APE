#include <stdio.h>

int main() {
    int num[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);

        if(num[i] < 0) {
            num[i] = 0;
        }
    }

    printf("\nVetor final:\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
}