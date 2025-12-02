#include <stdio.h>

struct at
{
    char n[50];
    char e[30];
    int i;
    float alt;
};

int main ()
{
    struct at atletas[5];
    int i;
    int ind_alto = 0;
    int ind_velho = 0;
    
    for (i = 0; i < 5; i++)
    {
        printf("\natleta %d\n", i + 1);
        printf("nome: ");
        scanf("%s", atletas[i].n);
        printf("esporte: ");
        scanf("%s", atletas[i].e);
        printf("idade: ");
        scanf("%d", &atletas[i].i);
        printf("altura: ");
        scanf("%f", &atletas[i].alt);
        
        if (atletas[i].alt > atletas[ind_alto].alt)
        {
            ind_alto = i;
        }
        
        if (atletas[i].i > atletas[ind_velho].i)
        {
            ind_velho = i;
        }
    }
    
    printf("\nmais alto: %s\n", atletas[ind_alto].n);
    printf("mais velho: %s\n", atletas[ind_velho].n);

    return 0;
}