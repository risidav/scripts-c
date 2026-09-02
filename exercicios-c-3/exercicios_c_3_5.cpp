#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i=1, n, valor=0;
	
	setlocale(LC_ALL, "");
	
	printf("\nDigite um número: \n");
	scanf("%i", &n);
	
	while(i<=10)
	{
		valor=n*i;
		printf("\n%i x %i = %i\n", n, i, valor);
		i++;
	}
    
    system("pause");
    return 0;
}

