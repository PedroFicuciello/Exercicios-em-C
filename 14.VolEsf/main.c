#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, vol;
	
	printf("Digite o valor do raio em cm: ");
	scanf("%f",&r);
	
	vol = 4 * 3.14 * (pow(r,3)) / 3;
	printf("O volume da esfera e de: %2.f cm^3",vol);
	
	return 0;
}
