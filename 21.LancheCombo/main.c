#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float opcao;
	
	printf("Digite 1 para lanche e 2 para combo: ");
	scanf("%f", &opcao);
	
	if (opcao == 1) {
	printf ("O valor do lanche e: RS13,50");
	}
	
	else{
	printf("O valor do combo e: RS25,00");
	}
	
	system("PAUSE");
	return 0;
}
