#include <stdio.h>

int main()
{
	int num[8], soma=0;
	for(int i=0; i<8; i++) {
		printf("Digite um número: ", i+1);
		scanf("%i", &num[i]);
	}

	for(int i=0; i<8; i++) {
		soma = soma+num[i];

	}
	printf("A soma dos números: %i \n", soma);
}

