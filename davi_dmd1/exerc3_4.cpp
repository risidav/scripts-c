#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int i=0;
	int soma=0;
	
	setlocale(LC_ALL, ""); 
	
	printf("Soma dos cem primeiros números positivos: \n\n");
	while(i<100)
	{
		i++;
		soma+=i;
	}
	printf("Número %i \n\n", soma);
	
	system("pause"); 
    return 0;
}
