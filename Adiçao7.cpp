    #include <stdio.h>	
	#include <iostream> 
	
	main() {
	
	int numA, numB, soma;
	
	printf ("Digite o primeiro numero a ser somado: ");
	scanf ("%i", &numA);
	printf ("\nDigite o segundo numero a ser somado: ");
	scanf ("%i",numB);
	
	soma=numA=numB;
	
	printf("\nO resultado da soma eh: %i \n\n", soma);
	
	system("pause");
}