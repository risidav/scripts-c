#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i=1, n, menor=0, maior=0;
	float soma, media;
	
	setlocale(LC_ALL, "");
	
	printf("\nLeitura de 500 números\n\n");
	
	do
	{
		printf("\nDigite o %i° número: \n", i);
		scanf("%i", &n);

		if(n>maior)
		{
			maior=n;
		}
		if(n<menor)
		{
			menor=n;
		}
		soma+=n;
		i++;
	}
	while(i<=500);
	
	media=soma/(i-1);
	
	printf("\nMaior número digitado: %i\n", maior);
	printf("\nMenor número digitado: %i\n", menor);
	printf("\nMédia dos números: %.1f\n\n", media);
    
    system("pause");
    return 0;
}


