#include <stdio.h>

int main()
{
	int num[10];
	for(int i=0; i<10; i++) {
		printf("Digite o %i° número: ", i+1);
		scanf("%i", &num[i]);
	}

	for(int i=0; i<10; i++) {
		if(num[i] %2==0);
		printf("Os números pares que ocê digitou são: %i \n", num[i]);
	}
}