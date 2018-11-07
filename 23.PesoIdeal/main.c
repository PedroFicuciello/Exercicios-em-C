#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float alt, peso;
	int sx;
	
	printf("Digite sua altura : ");
	scanf("%f", &alt);
	
	printf("Digite seu sexo \n 1 - Masculino \n 2 - Feminino \n");
	scanf("%d", &sx);
	
	if (sx == 1) {
		peso = (72.7 * alt) - 58;
		printf("Seu peso ideal e: %2.f \n",peso);
	}
	
	else {
		peso = (62.1 * alt) - 44.7;
		printf("Seu ideal e: %2.f \n",peso);
	}
	
	system("PAUSE");
	return 0;
}
