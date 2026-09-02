#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i=1, pi=0, n=1; 
	float soma, media;
	
	setlocale(LC_ALL, "");
	
	while(n!=0)
	{
		printf("\nDigite o %i° número: \n", i);
		scanf("%i", &n);
		if(n%2==0 && n!=0)
		{
			soma+=n;
			pi++;
		}
		i++;
	}
	
	media=soma/pi;
	
	printf("\nQuantidade de números pares: %i\n", pi);
	printf("\nSoma dos números: %.1f\n", soma);
	printf("\nMédia dos números: %.1f\n\n", media);
    
    system("pause");
    return 0;
}

