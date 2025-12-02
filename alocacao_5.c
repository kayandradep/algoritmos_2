#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N, i;
    int *V = NULL;
    
    do
    {
        printf("digite N (> 0): ");
        scanf("%d", &N);
        if (N <= 0)
        {
            printf("N deve ser positivo. digite novamente.\n");
        }
    } while (N <= 0);
    
    V = (int *)malloc(N * sizeof(int));
    
    if (V == NULL)
    {
        printf("erro de alocacao\n");
        return 1;
    }
    
    printf("digite %d inteiros (>= 2):\n", N);
    for (i = 0; i < N; i++)
    {
        do
        {
            printf("V[%d]: ", i);
            scanf("%d", &V[i]);
            if (V[i] < 2)
            {
                printf("valor deve ser maior ou igual a 2. digite novamente.\n");
            }
        } while (V[i] < 2);
    }
    
    printf("\nvetor lido com sucesso.\n");
    
    free(V);
    return 0;
}