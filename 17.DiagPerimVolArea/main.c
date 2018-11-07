#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float l1, l2, l3, per, area, vol, diag;
	
	printf("Lado 1: ");
	scanf("%f", &l1);
	
	printf("Lado 2: ");
	scanf("%f", &l2);
	
	printf("Lado 3: ");
	scanf("%f", &l3);
	
	diag = pow(l1,2) + pow(l2,2) + pow(l3,2);
	
	area = 2* (l1*l2 + l1*l3 + l2*l3);
	
	vol = l1*l2*l3;
	
	per = 4*(l1+l2+l3);
	
	printf("\n O valor da diagonal e: %f",diag);
	printf("\n O valor da area e: %f",area);
	printf("\n O valor do volume e: %f",vol);
	printf("\n O valor do perimetro e: %f",per);
	
	system("PAUSE");
return 0;
}
