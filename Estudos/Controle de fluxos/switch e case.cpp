#include <stdio.h>

int main (void){
	
	unsigned int opcao_menu;
	
	printf("Digite um dos seguintes n�meros para selecionar uma das seguintes op��es:\n");
	printf("[0]P�gina Inicial\n[1]Not�cias\n[2]Artigos Acad�micos\n[3]Contato\n");
	printf("Digite sua escolha:");
	scanf("%d", &opcao_menu);
	
	switch(opcao_menu){
		case 0:
			printf("Estamos lhe redirecionando para a p�gina inicial...\n");
			break;
		case 1:
			printf("Estamos lhe redirecionando para a p�gina de not�cias...\n");
			break;
		case 2:
			printf("Estamos lhe redirecionando para a p�gina de Artigos acad�micos...\n");
			break;
		case 3:
			printf("Estamos lhe redirecionando para a p�gina com os contatos...\n");
			break;
	}
	
	printf("Fim do programa.\n");	
}
