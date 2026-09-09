#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i=1, max, j, x, valor;
	
	setlocale(LC_ALL, "");
	
	printf("\nDigite a quantidade de fatoriais: \n");
	scanf("%i", &max);
	
	while(i<=max)
	{
		j=i;
		x=i;
	
		while(j>1)
		{
			j--;
			x*=j;
		}
		
		printf("\nFatorial de %i: %i\n", i, x);
		
		i++;
	}
    
    system("pause");
    return 0;
}



