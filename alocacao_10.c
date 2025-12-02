#include <stdio.h>
#include <stdlib.h>

int *aloca_e_preenche_val (int N, int val)
{
    if (N <= 0)
    {
        return NULL;
    }
    
    int *vetor = (int *)malloc(N * sizeof(int));
    int i;
    
    if (vetor == NULL)
    {
        return NULL;
    }
    
    for (i = 0; i < N; i++)
    {
        vetor[i] = val;
    }
    
    return vetor;
}

int main ()
{
    int N = 4, val = 69, i;
    int *vetor = aloca_e_preenche_val(N, val);
    
    if (vetor != NULL)
    {
        printf("vetor preenchido:\n");
        for (i = 0; i < N; i++)
        {
            printf("%d ", vetor[i]);
        }
        printf("\n");
        free(vetor);
    }
    else
    {
        printf("ponteiro nulo retornado\n");
    }
    
    return 0;
}