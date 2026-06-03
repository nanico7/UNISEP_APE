#include <stdio.h>

int main()

{
    int num, i;
    printf("digite um número de 1 a 10 \n");
    scanf("%i", &num);
    
    printf("A tabuada do %i é:\n", num);
    
    for(i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", num, i, num * i);
    }
    
}


