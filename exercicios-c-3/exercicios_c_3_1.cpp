#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int c=1, n, qn=0;
	
	setlocale(LC_ALL, "");
	
	while(c<=5)
	{
		printf("\nDigite o %i° número: \n", c);
		scanf("%i", &n);
		if(n<0)
		{
			qn++;
		}
		c++;
	}
	
	printf("\nQuantidade de negativos: %i\n", qn);
    
    system("pause");
    return 0;
}

