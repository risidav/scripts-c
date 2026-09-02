#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int i=0;
	
	setlocale(LC_ALL, ""); 
	
	printf("Números pares menores que 15: \n\n");
	while(i<15)
	{
		i++;
		if(i%2==0)
		{
			printf("Número %i\n", i);
		}
	}
	
	system("pause"); 
    return 0;
}
