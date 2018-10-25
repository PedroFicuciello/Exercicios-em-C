#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cm, m, dm, mm;
	
	printf ("Digite a medida em centimetros: ");
	scanf("%f",&cm);
	
	m = cm / 100;
	mm = cm / 0.10000;
	dm = cm / 10;
	printf("\nA sua medida em metros e de: %f metros", m);
	printf("\nA sua medida em milimetros e de: %f milimetros", mm);
	printf("\nA sua medida em decimetros e de: %f decimetros", dm);
	
	system ("PAUSE");
	return 0;
}
