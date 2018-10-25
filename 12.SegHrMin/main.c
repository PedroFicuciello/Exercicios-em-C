#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float seg, min, hr;
	printf("Digite a quantidade de tempo em segundos: ");
	scanf ("%f", &seg);
	
	min = seg/ 60;
	hr = min / 60;
	printf ("O valor em minutos e de : %f minutos",min);
	printf ("\nO valor em horas e de: %f horas",hr);
	
	system ("PAUSE");
	return 0;
}
