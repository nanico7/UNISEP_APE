#include <stdio.h>

int main() {
    int num;
    int contador = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num >= 0) {
            contador++;
        }

    } while(num >= 0);

    printf("Foram digitados %d numeros.", contador);
}