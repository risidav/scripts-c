#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int i=0;
	
	setlocale(LC_ALL, ""); 
	
	printf("Números entre 1 e 10: \n\n");
	while(i<10)
	{
		i++;
		printf("Número %i\n", i);
	}
	
	system("pause"); 
    return 0;
}
