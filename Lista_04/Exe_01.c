#include <stdio.h>

int soma(int a, int b )
{
    return a + b;
}

int main()
{
    int a, b;
    printf("Digite um número: ");
    scanf("%i", &a);
    printf("\nDigite um segundo número: ");
    scanf("%i", &b);
    printf("\nA soma dos seus números é = %i", soma(a,b));
}