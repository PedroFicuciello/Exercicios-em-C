#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, resto;
	
	printf("Digite um Numero: ");
	scanf("%d",&n);
	
	resto = n % 2;
	
	if (resto == 0) {
	printf("Este numero e par");
	}
	
	else {
	printf("Esse numero e impar");
	}
	
	return 0;
}
