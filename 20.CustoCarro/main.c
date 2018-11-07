#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cusfab;
	
	printf("Custo de fabrica do carro: ");
	scanf("%f",&cusfab);
	
	cusfab + (cusfab * 0.28 + 0.45);
	
	if (cusfab >= 10.000) {
		printf("O imposto do carro sera de 45 por cento");
	}
	
	else {
	printf("O imposto do carro sera de 50 por cento");
	}
	
	system("PAUSE");
	return 0;
	}
