#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, aux;
	
	printf("Valor de A: ");
	scanf("%d", &a);
	
	printf("Valor de B: ");
	scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux; 
	
	printf("a = %d \n", a);
    printf("b = %d \n", b);
    
	system("PAUSE");
return 0;
}
