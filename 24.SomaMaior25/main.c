#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, soma;
	
	printf("Digite um numero: ");
	scanf("%d",&n1);
	
	printf("Digite outro numero: ");
	scanf("%d",&n2);
	
	soma = n1 + n2;
	
	if (soma > 25) {
	printf("A soma e maior que 25");	
	}
 	
 	else {
 	printf ("A soma nao e maior que 25");
	}
	
	system("PAUSE");
	return 0;
}
