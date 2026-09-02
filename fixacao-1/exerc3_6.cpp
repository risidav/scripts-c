#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	int c=0;
	int f=0;
	
	setlocale(LC_ALL, ""); 
	
	printf("Conversão de Celsius para Fahrenheit de 5 em 5: \n\n");
	while(c<=100)
	{
		printf("Celsius: %i\n", c);
		f=(c*1.8)+32;
		printf("Fahrenheit: %i\n\n", f);
		c+=5;
	}

	system("pause"); 
    return 0;
}
