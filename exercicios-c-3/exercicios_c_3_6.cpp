#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i=1000, n;
	
	setlocale(LC_ALL, "");
	
	printf("\nNúmeros entre 1000 e 1999 que resultam em resto 5 se divididos por 11: \n");

	while(i<=1999)
	{
		if(i%11==5)
		{
			printf("\n %i \n", i);
		}
		i++;
	}
    
    system("pause");
    return 0;
}

