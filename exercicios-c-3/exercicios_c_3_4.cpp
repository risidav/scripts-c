#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i=1, ni=0, n=1; 
	float soma, media;
	
	setlocale(LC_ALL, "");
	
	while(n!=0)
	{
		printf("\nDigite o %i° número: \n", i);
		scanf("%i", &n);
		if(n<0)
		{
			soma+=n;
			ni++;
		}
		i++;
	}
	
	media=soma/ni;
	
	printf("\nQuantidade de negativos: %i\n", ni);
	printf("\nSoma dos negativos: %.1f\n", soma);
	printf("\nMédia dos negativos: %.1f\n\n", media);
    
    system("pause");
    return 0;
}

