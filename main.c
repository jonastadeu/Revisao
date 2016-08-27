#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	// criacao de variaveis
	int matriz[4][4], j = 0, k = 0;
	// busca de numeros aleatorios
	srand( (unsigned)time(NULL) );
	// imprime uma mensagem na tela
	printf("MATRIZ ORIGINAL:\n\n");
	// laco que varre a linha
	for (j = 0; j < 4; j++)
	{
		// laco que varre a coluna
		for (k = 0; k < 4; k++)
		{
			// insere um valor randomico em uma posicao da matriz
			matriz[j][k] = rand()%50;
			// imprime o valor da posicao atual da matriz
			printf("%02d ", matriz[j][k]);
		}
		// quebra a linha
		printf("\n");
	}
	// retorna 0
	return 0;
}
