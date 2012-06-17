/** Conversion de numeros a cualquier base */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	const char baseDigits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' 
	};

	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit,base,index = 0;


	printf("Escribe el numero a convertir: ");
	scanf("%ld",&numberToConvert);
	printf("Escribe la base:");
	scanf("%d",&base);

		// Realizando la operacion para convertir a la base indicada //
	do{

		convertedNumber[index] =  numberToConvert % base;
		++index;
		numberToConvert /=base;

	}
	while(numberToConvert != 0);

	// Imprimiendo el resultado //
	for (--index; index >= 0; --index)
	{
		nextDigit = convertedNumber[index];
		printf("%c",baseDigits[nextDigit] );
	}

	printf("\n");
	return 0;
}


