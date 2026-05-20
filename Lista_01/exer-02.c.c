#include <stdio.h>

int main() {

    int salario;
    
    printf("Digite seu salário: ");
    scanf("%i", &salario);
    
    if
    (salario>3000){
        printf("Você receberá %i", (salario/20)+salario);
    }
    else 
    printf("Você receberá %i", (salario/10)+salario);
}