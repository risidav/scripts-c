#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i=1, j, x, valor;
	
	setlocale(LC_ALL, "");
	
	printf("\nCálculo fatorial de ímpares entre 1 e 10: \n");
	
	while(i<=10)
	{
		if(i%2!=0)
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
		else
		{
			i++;
		}
	}
    
    system("pause");
    return 0;
}



