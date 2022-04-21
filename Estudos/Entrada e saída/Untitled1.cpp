#include <stdio.h>
#include <string.h>

int main (void) {
	
	const unsigned int T_NOME = 51;
	char n_completo[T_NOME];
	unsigned int idade;
	float altura, peso;
	
	printf("Qual é o seu nome completo?:  ");
	scanf("%50[^\n]s", n_completo);
	
	printf("Qual é a sua idade?:  ");
	scanf("%i", &idade);
	
	printf("Qual é a sua altura em metros?:  ");
	scanf("%f", &altura);
	
	printf("Agora, pode nos informar o seu peso em kilogramas?:  ");
	scanf("%f", &peso);
	
	printf("Olá, %s, você tem %d anos, pesa %.1f Kg e mede %.2f M, correto? \n", n_completo, idade, peso, altura);
	
}
