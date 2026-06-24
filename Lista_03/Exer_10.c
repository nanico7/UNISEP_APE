#include <stdio.h>

int main() {
    int num[10];
    int aux;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {

            if(num[j] > num[j + 1]) {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }

        }
    }

    printf("\nOrdem crescente:\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", num[i]);
}
}