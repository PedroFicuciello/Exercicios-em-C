#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valhr, hrtrab, bon, salbr, salliq;
	int qtdedepend;
	
	printf ("Digite quantos dependentes possui: ");
	scanf ("%d", & qtdedepend);
	
	printf ("\nDigite o valor das horas trabalhadas: ");
	scanf ("%f", & valhr);
	
	printf ("\nDigite quantas horas foram trabalhadas: ");
	scanf ("%f", & hrtrab);
	
	bon = qtdedepend * 300;
	salliq = valhr * hrtrab;
	salbr = salliq + bon;
	
	printf ("\nO seu salario liquido e de: %f \ne o seu salario bruto e de: %f", salliq,salbr);
	
	system ("PAUSE"); 
	return 0;
}
