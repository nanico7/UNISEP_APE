#include <stdio.h>

int main()
{
    int num[6];
    int maior;

    for(int i = 0; i < 6; i++) {
        printf("Digite o %i° número: \n", i + 1);
        scanf("%i", &num[i]);

        if(i == 0) {
            maior = num[i];
        }

        if(num[i] < maior) {
            maior = num[i];
        }
    }

    printf("O menor número é: %i", maior);

}