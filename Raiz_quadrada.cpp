#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float N, R;
	do {
		printf("Digite um numero nao-negativo:  ");
		scanf("%f",  &N);
		
	}  while ( N<0 );
	R = sqrt (N);
	printf("\na raiz quadrada de %.1f e' %.2f \n", N, R);
	system("pause");
	
}