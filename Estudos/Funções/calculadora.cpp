#include <stdio.h>
#include <math.h>

float raiz (float a){ //função raiz quadrada
	return pow(a, 0.5);
}

float soma (float a, float b){ //função soma
	return a + b;
}

float sub (float a, float b){ //função subtração
	return a - b;
}

float mult (float a, float b){ //função multiplicação
	return a * b;
}

float div (float a, float b){ //função divisão
	return a / b;
}

float pot (float a, float b){// função potenciação
	return pow(a, b);
}

int main (void){
	unsigned int escolha;
	float n1, n2;
	printf("CALCULADORA\n");
	printf("ESCOLHA UMA DAS OPERAÇÕES ABAIXO, USANDO O NÚMERO NA FRENTE DELAS:\n");
	printf("ADIÇÃO[0]\nSUBTRAÇÃO[1]\nMULTIPLICAÇÃO[2]\nDIVISÃO[3]\nRAIZ QUADRADA[4]\nPOTENCIALIZAÇÃO[5]\n");
	scanf("%d", &escolha);
	switch(escolha){
		case 0: //soma
		printf("Digite o primeiro número:");
		scanf("%f", &n1);
		printf("Digite o segundo número:");
		scanf("%f", &n2);
		printf("A soma entre %.2f e %.2f é %.2f", n1, n2, soma(n1, n2));
		break;
		case 1: // subtração
			printf("Digite o primeiro número:");
			scanf("%f", &n1);
			printf("Digite o segundo número:");
			scanf("%f", &n2);
			printf("A subtração entre %.2f e %.2f é %.2f", n1, n2, sub(n1, n2));
			break;
		case 2:
			printf("Digite o primeiro número:");
			scanf("%f", &n1);
			printf("Digite o segundo número:");
			scanf("%f", &n2);
			printf("A multiplicação entre %.2f e %.2f é %.2f", n1, n2, mult(n1, n2));
			break;
		case 3: //divisão
			printf("Digite o primeiro número:");
			scanf("%f", &n1);
			printf("Digite o segundo número:");
			scanf("%f", &n2);
			printf("A divisão de %.2f por %.2f é igual a %.2f", n1, n2, div(n1, n2));
			break;
		case 4: //raiz quadrada
			printf("Digite o número para ver sua raíz quadrada:");
			scanf("%f", &n1);
			printf("A raíz quadrada de %.2f é igual a %.2f", n1, raiz(n1));
			break;
		case 5:
			printf("Digite a base:");
			scanf("%f", &n1);
			printf("Digite o expoente:");
			scanf("%f", &n2);
			printf("%.2f elevado a %.2f é igual a %.2f", n1, n2, pot(n1, n2));
			break;
		default: //erro de escolha no menu
			printf("Operação inválida, por favor reinicie o programa e escolha a opção certa!\n");
			break;		
			
	}
	
}
