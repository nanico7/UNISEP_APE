#include <stdio.h>
#include <string.h>

void inverter(char v[], int t) {
    int i = 0, j = t - 1;

    while (i < j) {
        char aux = v[i];
        v[i] = v[j];
        v[j] = aux;

        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    scanf("%s", str);

    int tam = strlen(str);

    inverter(str, tam);

    printf("Invertida: %s\n", str);
}