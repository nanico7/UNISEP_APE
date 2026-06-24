#include <stdio.h>

int main() {
    int num;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {

        for(int j = 1; j <= num; j++) {
            printf("*");
        }

        printf("\n");
    }
}