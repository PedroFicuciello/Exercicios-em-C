#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float alt, bas, area;
	
	printf ("Digite a base do triangulo: ");
	scanf ("%f", &bas);
	
	printf ("Digite a altura do triangulo: ");
	scanf ("%f", &alt);
	
	area = bas * alt/2;
	printf ("A area do seu retangulo e de: %f",area);
	
	system ("PAUSE");
	return 0;
}
