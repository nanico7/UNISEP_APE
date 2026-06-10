#include <stdio.h>

int main() {

    int n1, n2;

    printf("Digite um número: ");
    scanf("%i", &n1);

    printf("Digite um segundo número: ");
    scanf("%i", &n2);

    if (n1 % n2 == 0) {
        printf("Seu número é múltiplo");
    }
    
    else {
        printf("Seu número não é mútliplo");
    }

}