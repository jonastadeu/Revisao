//****************************************************************************
// Calculo do fatorial de um numero inteiro
//****************************************************************************
// Programa utilizado na disciplina: Laboratorio de Algoritmos II
//
// JTR - 08/2016
//
//****************************************************************************

#include <stdio.h>

int main (void)
{
	unsigned int i;
	unsigned int n;
	unsigned int Resultado = 1;
	
	printf ("Entre com um numero (inteiro positivo)!\n");
	
	scanf ("%i", &n);
	
	for (i=0; i<n; i++)
	{
		printf ("\n%i x  %i", Resultado, (n-i));
		Resultado = Resultado * (n - i);
		printf (" = %i", Resultado);
	}
	
	printf ("\nO resultado e: %i", Resultado);
}

