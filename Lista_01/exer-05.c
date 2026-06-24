#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Nao pode votar");
    }
    else if ((idade >= 16 && idade < 18) || idade > 70) {
        printf("Voto opcional");
    }
    else {
        printf("Voto obrigatorio");
    }
}