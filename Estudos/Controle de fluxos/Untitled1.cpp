#include <stdio.h>

int main (void) {
	
	unsigned int idade;
	char sexo;
	
	scanf("%d %c", &idade, &sexo);
	//printf("idade = %d, sexo = %c", idade, sexo);
	
	if(idade == 18 && sexo == 'M'){
		printf("Está na hora de você se alistar!\n");
	}
	else if(idade < 18 && sexo == 'M'){
		printf("Faltam %d ano(s) para você se alistar.\n", 18 - idade);
	}
	else if(idade > 18 && sexo == 'M'){
		printf("Você deveria ter se alistado há %d ano(s).\n", idade - 18);
	}
	else{
		printf("Como você é mulher, não precisa se alistar!");
		
	}
}
