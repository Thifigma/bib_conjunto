#include <stdio.h>
#include <stdlib.h>

void verifica_vazio (int *conjunto, int *n)
{
    int i;
    for (i = 0; i < *n; i++)
        if (conjunto[i] > 0 )
            printf ("Não vazio");
        else
            printf ("vazio");
}

int devolve_tamanho ()
{
    int moeda;

    moeda = rand() %100;

    return moeda;
}

void preenche_conjunto (int *conjunto, int *n)
{
    int i;
    for (i = 0; i < *n; i++)
        conjunto[i] = rand() %42;
}

void cria_conjunto (int *conjunto, int *n)
{
    int i;
    for ( i = 0; i < *n; i++)
        conjunto[i] = rand () %42;
}

void uniao (int *conj1, int *conj2, int *tam_conj1) 
{
    int i;
    for (i = tam_conj1; i < (tam_conj1*2; )
}