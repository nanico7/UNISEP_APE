#include <stdio.h>

int main() {
    int n1, n2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (operacao == '+') {
        resultado = n1 + n2;
    }
    else if (operacao == '-') {
        resultado = n1 - n2;
    }
    else if (operacao == '*') {
        resultado = n1 * n2;
    }
    else if (operacao == '/') {
        resultado = n1 / n2;
    }
    else {
        printf("Operacao invalida!");
        return 0;
    }

    printf("Resultado: %d", resultado);

    return 0;
}