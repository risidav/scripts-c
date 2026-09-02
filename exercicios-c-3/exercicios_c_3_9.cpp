#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	char comodo[] = "";
	int i;
	float largura, comprimento, area;
	
	setlocale(LC_ALL, "");
	
	printf("\nCálculo de área dos cômodos da residência: \n\n");
	
	do
	{
		printf("\nDigite o nome do cômodo: \n");
		scanf("%s", &comodo);
		printf("\nDigite a largura do(a) %s (em metros): \n", comodo);
		scanf("%f", &largura);
		printf("\nDigite o comprimento do(a) %s (em metros): \n", comodo);
		scanf("%f", &comprimento);
		
		area=largura*comprimento;
		printf("\n\nÁrea do cômodo: %.1f\n", comodo, area);
		printf("\n\nDeseja continuar? (1=sim, 2=não)\n\n");
		scanf("%i", &i);
	}
	while(i!=2);
    
    system("pause");
    return 0;
}



