#include <stdio.h>

int main (void){
	
	const unsigned int TAMANHO = 11;
	unsigned int penultimo = 0, ultimo = 1, novo, contadora = 2;
	
	printf("%d\n%d\n", penultimo, ultimo);
	for(contadora; contadora < TAMANHO; contadora++){
		novo = penultimo + ultimo;
		printf("%d\n",novo);
		penultimo = ultimo;
		ultimo = novo;
	}
}
