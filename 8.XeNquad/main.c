#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, n, quad, val;
	
	printf("Digite o valor de x: ");
	scanf ("%d", &x);
	
	printf("Digite o valor de n: ");
	scanf ("%d", &n);
	
	val = x * n;
	quad = val * val;
	printf ("O valor ao quadrado desse numero e de: %d",quad);
	
	system ("PAUSE");
	return 0;
}
