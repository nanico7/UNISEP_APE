#include <stdio.h>

int main() {

    int n1, n2, i;

    printf("Digite um numero: ");
    scanf("%i", &n1);

    printf("Digite um segundo numero: ");
    scanf("%i", &n2);

    if(n1 < n2) {

        for(i = n1 + 1; i < n2; i++) {
            printf("%i\n", i);
        }

    } else {

        for(i = n1 - 1; i > n2; i--) {
            printf("%i\n", i);
        }

    }

}