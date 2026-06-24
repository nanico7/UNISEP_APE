#include <stdio.h>

int contarVogais(char str[]) {
    int cont = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            cont++;
        }
    }

    return cont;
}

int main() {
    char str[100];

    printf("Digite uma palavra: ");
    scanf("%s", str);

    printf("Vogais: %d\n", contarVogais(str));

}