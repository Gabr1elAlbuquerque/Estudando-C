#include <stdio.h>

int main (void){
	
	const unsigned int TAMANHO = 11;
	unsigned int contadora = 0, n, resultado;
	
	printf("Digite um número para ver a sua tabuada: ");
	scanf("%d", &n);
	
	while(contadora < TAMANHO){
		resultado = n * contadora;
		printf("%d X %2d = %d \n", n, contadora, resultado);
		contadora++;
	}
}

