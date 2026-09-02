#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i, n, total=0;
	
	setlocale(LC_ALL, "");
	
	printf("\nDigite um número para o cálculo fatorial: \n");
	scanf("%i",&n);
	i=n;
	
	do
	{
		i--;
		total*=i;
	}
	while(i>1);
    
    printf("\nFatorial de %i: %i \n", n, total);
    
    system("pause");
    return 0;
}



