#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float m1, m2, m3, val1, val2, val3;
	
	printf ("\n O saldo do inicial e de: RS500,00");
	
	m1 = 500 * 0.01;
	val1 = m1 + 500;
	printf ("\n O saldo do primeiro mes foi de: %f", val1);
	
	m2 = val1 * 0.01;
	val2 = m2 + val1;
	printf ("\n O saldo do segundo mes foi de: %f", val2);
	
	m3 = val2 * 0.01;
	val3 = m3 + val2;
	printf ("\n O saldo do terceiro mes foi de: %f", val3);
	
	system ("PAUSE");
	return 0;
}
