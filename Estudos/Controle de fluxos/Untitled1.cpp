#include <stdio.h>

int main (void) {
	
	unsigned int idade;
	char sexo;
	
	scanf("%d %c", &idade, &sexo);
	//printf("idade = %d, sexo = %c", idade, sexo);
	
	if(idade == 18 && sexo == 'M'){
		printf("Est� na hora de voc� se alistar!\n");
	}
	else if(idade < 18 && sexo == 'M'){
		printf("Faltam %d ano(s) para voc� se alistar.\n", 18 - idade);
	}
	else if(idade > 18 && sexo == 'M'){
		printf("Voc� deveria ter se alistado h� %d ano(s).\n", idade - 18);
	}
	else{
		printf("Como voc� � mulher, n�o precisa se alistar!");
		
	}
}
