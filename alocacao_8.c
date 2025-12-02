#include <stdio.h>
#include <stdlib.h>

int *aloca_vetor_positivo (int N)
{
    if (N <= 0)
    {
        return NULL;
    }
    
    int *vetor = (int *)malloc(N * sizeof(int));
    
    return vetor;
}

int main ()
{
    int N_valido = 3;
    int N_invalido = 0;
    int *p1, *p2;
    
    p1 = aloca_vetor_positivo(N_valido);
    
    if (p1 != NULL)
    {
        printf("vetor de tamanho %d alocado em %p\n", N_valido, (void *)p1);
        free(p1);
    }
    
    p2 = aloca_vetor_positivo(N_invalido);
    
    if (p2 == NULL)
    {
        printf("ponteiro nulo retornado para N=%d\n", N_invalido);
    }
    
    return 0;
}