#include <stdio.h>

int main (void) {
	
	unsigned int l1, l2, l3;
	//l de lado!
	
	printf("Este programa analisar� se tr�s lados formam um tri�ngulo \n");
	
	printf("Digite o primeiro lado: ");
	scanf("%d", &l1);
	printf("Digite o segundo lado: ");
	scanf("%d", &l2);
	printf("Agora, digite o terceiro lado: ");
	scanf("%d", &l3);
	
	if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
		printf("Os lados %d, %d, e %d formam um tri�ngulo\n", l1, l2, l3);
	
		 if (l1 == l2 && l1 == l3 || l2 == l1 && l2 == l3 || l3 == l1 && l3 == l2){
			printf("O tri�ngulo formado � equil�tero. \n");
		}
		 else if (l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l2 == l1 && l2 != l3 || l2 == l3 && l2 != l1 || l3 == l1 && l3 != l2 || l3 == l2 && l3 != l1){
			printf("O tri�ngulo formado � is�sceles \n");
		}
		 else if (l1 != l2 && l2 != l3 && l3 != l1){
			printf("O tri�ngulo formado � escaleno \n");
		}
	}
	else{
		printf("Os lados digitados n�o formam um tri�ngulo.\n");
	}
}
