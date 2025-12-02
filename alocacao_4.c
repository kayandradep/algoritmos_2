#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N, i;
    int *vetor;
    
    printf("tamanho do vetor: ");
    scanf("%d", &N);
    
    vetor = (int *)malloc(N * sizeof(int));
    
    if (vetor == NULL)
    {
        printf("erro de alocacao\n");
        return 1;
    }
    
    printf("digite %d elementos:\n", N);
    for (i = 0; i < N; i++)
    {
        printf("v[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nvetor impresso:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    free(vetor);
    return 0;
}