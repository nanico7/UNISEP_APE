#include <stdio.h>

int main() {
    int num;
    int divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {

        if(num % i == 0) {
            divisores++;
        }

    }

    if(divisores == 2) {
        printf("Numero primo");
    }
    else {
        printf("Nao e primo");
    }
}