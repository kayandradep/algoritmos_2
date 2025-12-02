#include <stdio.h>
#include <stdlib.h>

struct cad
{
    char n[50];
    int i;
    char end[100];
};

struct cad *aloca_e_le_cadastro (int N)
{
    struct cad *vetor = (struct cad *)malloc(N * sizeof(struct cad));
    int i;
    
    if (vetor == NULL)
    {
        return NULL;
    }
    
    for (i = 0; i < N; i++)
    {
        printf("cadastro %d\n", i + 1);
        printf("nome: ");
        scanf("%s", vetor[i].n);
        printf("idade: ");
        scanf("%d", &vetor[i].i);
        printf("endereco: ");
        scanf("%s", vetor[i].end);
    }
    
    return vetor;
}

int main ()
{
    int N;
    struct cad *p;
    
    printf("numero de cadastros: ");
    scanf("%d", &N);
    
    p = aloca_e_le_cadastro(N);
    
    if (p != NULL)
    {
        printf("\ncadastros lidos e alocados\n");
        free(p);
    }
    else
    {
        printf("erro de alocacao\n");
    }
    
    return 0;
}