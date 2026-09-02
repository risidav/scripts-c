#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{
	int i=0;
	int n,soma;
	float media;
	bool fim;
	
	setlocale(LC_ALL, ""); 
	
	printf("Cálculo de Soma e Média (Digite 0 para terminar): \n");
	while(!fim)
	{
		i++;
		printf("\nDigite o %i° número: \n", i);
		scanf("%i",&n);
		soma+=n;
		if(n==0)
		{
			fim=true;
		}
	}
	media=soma/i;
	printf("\nNúmeros: %i\n", i);
	printf("Soma dos números: %i\n", soma);
	printf("Média dos números: %.1f\n", media);
	
	system("pause"); 
    return 0;
}
