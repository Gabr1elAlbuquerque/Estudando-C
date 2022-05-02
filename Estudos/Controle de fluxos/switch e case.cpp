#include <stdio.h>

int main (void){
	
	unsigned int opcao_menu;
	
	printf("Digite um dos seguintes números para selecionar uma das seguintes opções:\n");
	printf("[0]Página Inicial\n[1]Notícias\n[2]Artigos Acadêmicos\n[3]Contato\n");
	printf("Digite sua escolha:");
	scanf("%d", &opcao_menu);
	
	switch(opcao_menu){
		case 0:
			printf("Estamos lhe redirecionando para a página inicial...\n");
			break;
		case 1:
			printf("Estamos lhe redirecionando para a página de notícias...\n");
			break;
		case 2:
			printf("Estamos lhe redirecionando para a página de Artigos acadêmicos...\n");
			break;
		case 3:
			printf("Estamos lhe redirecionando para a página com os contatos...\n");
			break;
	}
	
	printf("Fim do programa.\n");	
}
