#include <stdio.h>
#include <iostream>

const unsigned int TAMANHO = 52;

typedef enum _naipe_t{
    paus,
    ouro,
    espadilha,
    copas
}naipe_t;

typedef struct _cartas_t{
    int numeros, virada;
    naipe_t naipe;
}cartas_t;

cartas_t baralho[TAMANHO];

int main (int argc, char *argv[]){
    for(int c = 0; c < TAMANHO; c++){
        baralho[c].numeros = (c % 13) + 1;
        baralho[c].naipe = (naipe_t) (c / 13);
        printf("%i %i %i\n", c, baralho[c].numeros, baralho[c].naipe);
    }
    /* No printf, a primeira coluna é o indice, na segunda o número da carta(1 = A, 11 = J, 12 = Q, 13 = K), na terceira é o naipe que foi definido no enum acima*/
}