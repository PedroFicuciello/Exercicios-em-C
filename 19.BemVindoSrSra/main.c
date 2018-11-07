#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sx[10];
	
	printf("Digite seu sexo: ");
	scanf("%s",&sx);
	
	if ( strcmp (sx , "Masculino") == 0) {
		printf("Bem-vindo, Senhor!");
	}
	
	else {
 		printf("Bem-vinda, Senhora!");
	}
	
	return 0;
}
