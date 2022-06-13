#include <stdio.h>

int main (void){
    const unsigned int TAMANHO = 10;
    int ultimo = 1, penultimo = 0, novo;

    printf("%d\n%d", penultimo, ultimo);
    while(int c = 0 < TAMANHO){
        novo = ultimo + penultimo;
        printf("%d\n", novo);
        penultimo = ultimo;
        ultimo = novo;
        c++;
    };

}