#include <stdio.h>
#include <stdlib.h>

//Para facilitar considerei que todos os vetores têem o mesmo tamanho.

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

int tamanho (int conj1,int conj2, int tam)
{
    int novo_tam = 0;
    int i;
    for (i = 0; i < tam; i ++)
    {
        if (conj1[i] = conj2[i])
            tam = tam + 1;
    }

    return novo_tam;    
}

void uniao (int *conj1, int *conj2, int *tam_conj1)  // Uniao so coloca o que não tem, entao tem que verificar se no cj1 tem os [] do cj2 se tiver nao poem. Logo como determinaro tamanho do vetor se nao sei direito quais tem e quais não tem?
{
    tamanho (conj1, conj2);  //verifica os conteudos para retornar o novo tamanho do conjunto.
    int i;

    for (i = tam_conj1; i < (tam_conj1 + tamanho(conj1, conj2); i__ ) )
        conj1[tam_conj1] =                                               //Como verificar que conjunto ja estava e qual n estava?

}

void intersec () // so coloca os que estao nos dois.