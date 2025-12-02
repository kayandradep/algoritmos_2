#include <stdio.h>
#include <string.h>

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
    struct at temp;
    int i, j;

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
    }
    
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (atletas[i].i < atletas[j].i)
            {
                temp = atletas[i];
                atletas[i] = atletas[j];
                atletas[j] = temp;
            }
        }
    }
    
    printf("\nordenado (velho -> novo)\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s, %d anos\n", atletas[i].n, atletas[i].i);
    }

    return 0;
}