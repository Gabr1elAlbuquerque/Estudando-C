#include <stdio.h>
#include <math.h>

float raiz(int a){
	return pow(a, 0.5);
}

int main (void){
	int num;
	float ra;
	printf("Digite um n�mero inteiro para ver sua raiz quadrada: ");
	scanf("%d", &num);
	ra = raiz(num);
	printf("%f", ra);
}
