#include <stdio.h>

int main() {
    int num[10];
    int positivos = 0;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);

        if(num[i] > 0) {
            positivos++;
        }
    }

    printf("Quantidade de positivos: %d", positivos);
}