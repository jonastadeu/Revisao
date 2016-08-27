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
			// insere o indice da coluna na matriz
			matriz[j][k] = k;
			// imprime o valor da posicao atual da matriz
			printf("%02d ", matriz[j][k]);
		}
		// quebra a linha
		printf("\n");
	}
	
	// imprime uma mensagem de identificacao
	printf("\nOs elementos da diagonal principal sao:\n");
	// efetua a varredura da matriz
	for(j = 0; j < 4; j++)
	{	
		// imprime os elementos da diagonal
		printf("%02d ", matriz[j][j]);
	}
	
	// imprime uma mensagem de identificacao
	printf("\n\nOs outros elementos sao:\n");
	// laco que varre a linha
	for(j = 0; j < 4; j++)
	{
		// laco que varre a coluna
		for(k = 0; k < 4; k++)
		{
			// se os indices forem iguais (diagonal principal)
			if (j==k) printf("   ");
			// senao imprime o valor da posicao atual da matriz
			else printf("%02d ", matriz[j][k]);
		}
		// quebra a linha
		printf("\n");
	}
	
	// retorna 0
	return 0;
}
