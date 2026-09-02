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
		if(n%3==0)
		{
			qn++;
		}
		c++;
	}
	
	printf("\nQuantidade de divisíveis por 3: %i\n", qn);
    
    system("pause");
    return 0;
}

