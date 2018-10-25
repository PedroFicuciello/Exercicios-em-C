#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, area;
	
	printf ("Digite a base do retangulo: ");
	scanf ("%f", &b);
	
	printf ("Digite a altura do retangulo: ");
	scanf ("%f", &a);
	
	area = b * a;
	printf ("A area do retangulo e de: %f",area);
	
	system ("PAUSE");
	return 0;
}
