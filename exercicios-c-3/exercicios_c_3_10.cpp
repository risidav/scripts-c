#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i, n, x, valor;
	
	setlocale(LC_ALL, "");
	
	printf("\nDigite um número para cálculo fatorial: \n");
	scanf("%i", &n);
	i=n;
	x=n;
	
	while(i>1)
	{
		i--;
		x*=i;
	}
    
    printf("\nResultado: %i\n", x);
    
    system("pause");
    return 0;
}



