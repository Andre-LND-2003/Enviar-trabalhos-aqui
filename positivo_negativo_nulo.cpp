#include <stdio.h>
#include <math.h>

int main(){
	
	int numero;
	printf("digite um numero\n");
	scanf("%i",&numero);
	
	if(numero>0){
		printf("esse numero eh positivo");
}
	
	if(numero==0){	
	printf("esse numero eh neutro");
}
	if(numero<0){
		printf("esse numero eh negativo");
	}
	return 0;
}