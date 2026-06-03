#include <stdio.h>

int main() {
    printf("Os números pares de 1 a 20 são:\n");
    for (int i = 2; i <= 20; i = i + 2) {
        printf("%d ", i);
    }
}