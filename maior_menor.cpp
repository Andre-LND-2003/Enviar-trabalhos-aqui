#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num1, num2, num3, soma, media, produto, menor, maior;
	
	printf("Digite tres inteiros diferentes\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	soma = num1 + num2 + num3;
	media = (num1 + num2 + num3) / 3;
	produto = num1 * num2 * num3;
	
	
	printf("A soma e %d\n", soma);
	printf("A media e %d\n", media);
	printf("O produto e %d\n", produto);
	printf("O menor e %d\n", menor);
	printf("O maior e %d\n", maior);
	
	return 0; 
}