#include <stdio.h>

int main (void) {
	
	unsigned int l1, l2, l3;
	//l de lado!
	
	printf("Este programa analisará se três lados formam um triângulo \n");
	
	printf("Digite o primeiro lado: ");
	scanf("%d", &l1);
	printf("Digite o segundo lado: ");
	scanf("%d", &l2);
	printf("Agora, digite o terceiro lado: ");
	scanf("%d", &l3);
	
	if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
		printf("Os lados %d, %d, e %d formam um triângulo\n", l1, l2, l3);
	
		 if (l1 == l2 && l1 == l3 || l2 == l1 && l2 == l3 || l3 == l1 && l3 == l2){
			printf("O triângulo formado é equilátero. \n");
		}
		 else if (l1 == l2 && l1 != l3 || l1 == l3 && l1 != l2 || l2 == l1 && l2 != l3 || l2 == l3 && l2 != l1 || l3 == l1 && l3 != l2 || l3 == l2 && l3 != l1){
			printf("O triângulo formado é isósceles \n");
		}
		 else if (l1 != l2 && l2 != l3 && l3 != l1){
			printf("O triângulo formado é escaleno \n");
		}
	}
	else{
		printf("Os lados digitados não formam um triângulo.\n");
	}
}
