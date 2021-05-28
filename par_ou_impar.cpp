#include <stdio.h>

int main(){
	int num;
	
	printf("numero: ");
	
	scanf("%d", &num);
	
	if(num % 2 == 0)
	    printf("numero par");
	else
	    printf("numero impar");
		
		return 0;
}