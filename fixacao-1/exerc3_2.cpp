#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int i=10;
	
	setlocale(LC_ALL, ""); 
	
	printf("Números entre 1 e 10 de forma decrescente: \n\n");
	while(i>0)
	{
		printf("Número %i\n", i);
		i--;
	}
	
	system("pause"); 
    return 0;
}
