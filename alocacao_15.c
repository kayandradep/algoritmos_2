#include <stdio.h>
#include <stdlib.h>

int *produto_vetores (int *A, int *B, int N)
{
    if (N <= 0) return NULL;
    
    int *C = (int *)malloc(N * sizeof(int));
    int i;
    
    if (C == NULL) return NULL;
    
    for (i = 0; i < N; i++)
    {
        C[i] = A[i] * B[i];
    }
    
    return C;
}

int main ()
{
    int A[] = {2, 4, 6};
    int B[] = {1, 2, 3};
    int N = 3, i;
    int *C = produto_vetores(A, B, N);
    
    if (C != NULL)
    {
        printf("vetor C (A*B):\n");
        for (i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
        free(C);
    }
    else
    {
        printf("erro de alocacao\n");
    }
    
    return 0;
}