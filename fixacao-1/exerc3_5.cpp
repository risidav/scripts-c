#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main()
{
	int i=5;
	int quadrado=0;
	
	setlocale(LC_ALL, ""); 
	
	printf("Quadrado dos números entre 5 e 20: \n\n");
	while(i<=20)
	{
		quadrado=pow(i, 2);
		printf("Quadrado de %i: %i\n", i, quadrado);
		i++;
	}
	
	system("pause"); 
    return 0;
}
