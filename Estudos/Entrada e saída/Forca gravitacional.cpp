#include <stdio.h>

int main (void) {
	
	const double G = 6.67e-11;
	double F, m1, m2, d;
	
	//F = (G * m1 * m2 ) / (d * d);
	
	printf("Este programa calculará a força gravitacional entre dois corpos.\n");
	
	printf("Digite o valor da massa, em kilogramas, do primeiro corpo:  ");
	scanf("%lf", &m1);
	
	printf("Digite o valor da massa, em kilogramas, do segundo corpo:  ");
	scanf("%lf", &m2);
}
