#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	printf("Numero antecessor: %d",(n-1));
	printf("Numero sucessor: %d",(n+1));
	
	system("PAUSE");
return 0;
}
