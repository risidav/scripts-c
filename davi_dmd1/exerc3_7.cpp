#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{
	int i=0;
	int nota,soma;
	float media;
	
	setlocale(LC_ALL, ""); 
	
	printf("Leitura de Notas: \n");
	while(i<5)
	{
		i++;
		printf("\nEscreva a Nota %i: \n", i);
		scanf("%i",&nota);
		soma+=nota;
	}
	media=soma/5;
	printf("\nSoma das notas: %i\n", soma);
	printf("Média das notas: %.1f\n", media);
	
	system("pause"); 
    return 0;
}
