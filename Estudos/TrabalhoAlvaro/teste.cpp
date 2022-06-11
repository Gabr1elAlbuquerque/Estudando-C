#include <stdio.h>
#include <iostream>

int main(int argc, char const *argv[])
{
    const unsigned int TAMANHO = 13;
    typedef struct _cartas
    {
        char letra;
        int numero;
    }cartas;

    cartas v[TAMANHO];
    for (int i = 0; i < TAMANHO; i++)
    {
           if (i < 4)
           {
                scanf("%c", &v[i]);}
            scanf("%d", &v[i]);

           
    }
    
    
    return 0;
}
