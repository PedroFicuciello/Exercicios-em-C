#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nasc, id, idfut, ano;
  
  	printf("Digite seu ano de nascimento: ");
  	scanf("%d",&nasc);
  
  	printf("Digite o ano presente: ");
  	scanf("%d", &ano);
  
  	id = ano - nasc;
  	idfut = 2050 - nasc;
  
  	printf("Voce tem: %d anos",id);
	printf("\nEm 2050 voce tera: %d anos\n",idfut);
  
  	system("PAUSE");
	return 0;
}
