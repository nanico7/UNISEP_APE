#include <stdio.h>

int main()
{
	int num[5];
	for(int i=0; i<5; i++) {
		printf("Digite o %i° número: ", i+1);
		scanf("%i", &num[i]);
	}

	for(int i=0; i<5; i++) {
		printf("Você digitu os números: %i \n", num[i]);
	}
}