#include <stdio.h>
#include <stdlib.h>

int *aloca_e_preenche_vetor (int N)
{
    int *vetor = (int *)malloc(N * sizeof(int));
    int i;
    
    if (vetor == NULL)
    {
        return NULL;
    }
    
    for (i = 0; i < N; i++)
    {
        vetor[i] = i;
    }
    
    return vetor;
}

int main ()
{
    int N = 8, i;
    int *vetor = aloca_e_preenche_vetor(N);
    
    if (vetor != NULL)
    {
        printf("vetor:\n");
        for (i = 0; i < N; i++)
        {
            printf("%d ", vetor[i]);
        }
        printf("\n");
        free(vetor);
    }
    else
    {
        printf("erro de alocacao\n");
    }
    
    return 0;
}