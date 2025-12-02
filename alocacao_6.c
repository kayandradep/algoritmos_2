#include <stdio.h>
#include <stdlib.h>

int *aloca_matriz (int L, int C)
{
    int *mat = (int *)malloc(L * C * sizeof(int));
    return mat;
}

int busca_valor (int *mat, int L, int C, int val)
{
    int i;
    int tam = L * C;
    
    for (i = 0; i < tam; i++)
    {
        if (mat[i] == val)
        {
            return 1;
        }
    }
    return 0;
}

int main ()
{
    int L, C, val, i, j;
    int *matriz;
    
    printf("linhas: ");
    scanf("%d", &L);
    printf("colunas: ");
    scanf("%d", &C);
    
    matriz = aloca_matriz(L, C);
    
    if (matriz == NULL)
    {
        printf("erro de alocacao\n");
        return 1;
    }
    
    printf("digite os elementos da matriz:\n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("[%d][%d]: ", i, j);
            /* Acessa o elemento na posicao linear (i * C + j) */
            scanf("%d", &matriz[i * C + j]); 
        }
    }
    
    printf("valor a buscar: ");
    scanf("%d", &val);
    
    if (busca_valor(matriz, L, C, val))
    {
        printf("o valor %d esta na matriz\n", val);
    }
    else
    {
        printf("o valor %d NAO esta na matriz\n", val);
    }
    
    free(matriz);
    return 0;
}