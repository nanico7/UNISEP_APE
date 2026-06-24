#include <stdio.h>

int main() {
    int num[6];
    int maior, segundo;

    for(int i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }

    maior = segundo = num[0];

    for(int i = 1; i < 6; i++) {

        if(num[i] > maior) {
            segundo = maior;
            maior = num[i];
        }
        else if(num[i] > segundo && num[i] != maior) {
            segundo = num[i];
        }

    }

    printf("Segundo maior valor: %d", segundo);
}