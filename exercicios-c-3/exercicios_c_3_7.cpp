#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int c1, c2, vb, vn, i; 
	int n=1; 
	float pc1, pc2, pvb, pvn;
	
	setlocale(LC_ALL, "");
	
		printf("\nSistema de Votos: \n1 - Candidato 1\n 2 - Candidato 2\n 3 - Voto em Branco\n 4 - Voto Nulo\n 0 - Terminar contagem de votos \n");
	
	while(n!=0)
	{
		printf("\nDigite a ação: \n");
		scanf("%i", &n);
		switch(n)
		{
			case 1:
				c1++;
				break;
				
			case 2:
				c2++;
				break;
				
			case 3:
				vn++;
				break;
				
			case 4:
				vb++;
				break;
				
			case 0:
				break;
				
			default:
				printf("\nNúmero inválido\n");
				break;
		}
		i++;
	}
	
	pc1=(100/i)*(float)c1;
	pc2=(100/i)*(float)c2;
	pvb=(100/i)*(float)vb;
	pvn=(100/i)*(float)vn;
	
	printf("\nPorcentagem dos Votos: \n\n");
	printf("\nCandidato 1: %.1f%% dos votos\n", pc1);
	printf("\nCandidato 2: %.1f%% dos votos\n", pc2);
	printf("\nVotos nulos: %.1f%% dos votos\n", pvn);
	printf("\nVotos em branco: %.1f%% dos votos\n\n", pvb);
    
    system("pause");
    return 0;
}

