#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n1 - Ola\n");
        printf("2 - Tudo bem?\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("Ola!\n");
        }
        else if(opcao == 2) {
            printf("Tudo bem?\n");
        }

    } while(opcao != 3);
}