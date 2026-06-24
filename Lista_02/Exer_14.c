#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = num; i >= 0; i--) {
        printf("%d\n", i);
    }
}