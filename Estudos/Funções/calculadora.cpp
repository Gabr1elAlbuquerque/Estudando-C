#include <stdio.h>
#include <math.h>

float raiz (float a){ //fun��o raiz quadrada
	return pow(a, 0.5);
}

float soma (float a, float b){ //fun��o soma
	return a + b;
}

float sub (float a, float b){ //fun��o subtra��o
	return a - b;
}

float mult (float a, float b){ //fun��o multiplica��o
	return a * b;
}

float div (float a, float b){ //fun��o divis�o
	return a / b;
}

float pot (float a, float b){// fun��o potencia��o
	return pow(a, b);
}

int main (void){
	unsigned int escolha;
	float n1, n2;
	printf("CALCULADORA\n");
	printf("ESCOLHA UMA DAS OPERA��ES ABAIXO, USANDO O N�MERO NA FRENTE DELAS:\n");
	printf("ADI��O[0]\nSUBTRA��O[1]\nMULTIPLICA��O[2]\nDIVIS�O[3]\nRAIZ QUADRADA[4]\nPOTENCIALIZA��O[5]\n");
	scanf("%d", &escolha);
	switch(escolha){
		case 0: //soma
		printf("Digite o primeiro n�mero:");
		scanf("%f", &n1);
		printf("Digite o segundo n�mero:");
		scanf("%f", &n2);
		printf("A soma entre %.2f e %.2f � %.2f", n1, n2, soma(n1, n2));
		break;
		case 1: // subtra��o
			printf("Digite o primeiro n�mero:");
			scanf("%f", &n1);
			printf("Digite o segundo n�mero:");
			scanf("%f", &n2);
			printf("A subtra��o entre %.2f e %.2f � %.2f", n1, n2, sub(n1, n2));
			break;
		case 2:
			printf("Digite o primeiro n�mero:");
			scanf("%f", &n1);
			printf("Digite o segundo n�mero:");
			scanf("%f", &n2);
			printf("A multiplica��o entre %.2f e %.2f � %.2f", n1, n2, mult(n1, n2));
			break;
		case 3: //divis�o
			printf("Digite o primeiro n�mero:");
			scanf("%f", &n1);
			printf("Digite o segundo n�mero:");
			scanf("%f", &n2);
			printf("A divis�o de %.2f por %.2f � igual a %.2f", n1, n2, div(n1, n2));
			break;
		case 4: //raiz quadrada
			printf("Digite o n�mero para ver sua ra�z quadrada:");
			scanf("%f", &n1);
			printf("A ra�z quadrada de %.2f � igual a %.2f", n1, raiz(n1));
			break;
		case 5:
			printf("Digite a base:");
			scanf("%f", &n1);
			printf("Digite o expoente:");
			scanf("%f", &n2);
			printf("%.2f elevado a %.2f � igual a %.2f", n1, n2, pot(n1, n2));
			break;
		default: //erro de escolha no menu
			printf("Opera��o inv�lida, por favor reinicie o programa e escolha a op��o certa!\n");
			break;		
			
	}
	
}
