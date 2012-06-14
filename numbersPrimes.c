/** Numero primos*/
#include <stdio.h>
#include <stdbool.h>

void numberPrime(int,int);

int main(int argc, char const *argv[])
{
	int p,q;

	printf("Programa que imprime los numeros primos de un intervalo.\n");
	printf("Escribe el intervalo: [a,b]: ");
	scanf("%d,%d",&p,&q);
	numberPrime(p,q);

	return 0;
}
	
	/** Función que imprime los numeros primos que estan en un intervalo*/
void numberPrime(int p,int q)
{
	int cont,cont2;
	_Bool isPrime;

	printf("Los numero primeros en el intervalo [%d,%d]: ",p,q);
	for (cont = p; cont <= q; ++cont)
	{
		isPrime = true;
		
		for (cont2 = p; cont2 < cont; ++cont2)
		{	
			if (cont%cont2 ==0)
			{
				isPrime = false;
			}
		}
		if (isPrime != false)
		{
			printf("%i ", cont);
		}
	}

	printf("\n");
}