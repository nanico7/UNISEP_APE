#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("Conceito A");
    }
    else if (nota >= 7) {
        printf("Conceito B");
    }
    else if (nota >= 5) {
        printf("Conceito C");
    }
    else {
        printf("Conceito D");
    }

    return 0;
}