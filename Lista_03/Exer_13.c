#include <stdio.h>

int main() {
    int num[10];
    int repeticoes;
    int maiorRep = 0;
    int maisRep;

    for(int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 10; i++) {

        repeticoes = 0;

        for(int j = 0; j < 10; j++) {

            if(num[i] == num[j]) {
                repeticoes++;
            }

        }

        if(repeticoes > maiorRep) {
            maiorRep = repeticoes;
            maisRep = num[i];
        }
    }

    printf("Numero que mais se repete: %d", maisRep);
    printf("\nQuantidade: %d", maiorRep);
}