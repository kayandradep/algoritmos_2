#include <stdio.h>

struct d
{
    int d;
    int m;
    int a;
};

struct p
{
    char n[50];
    struct d nasc;
};

int comp_data (struct d d1, struct d d2)
{
    if (d1.a != d2.a)
    {
        return d1.a - d2.a;
    }
    if (d1.m != d2.m)
    {
        return d1.m - d2.m;
    }
    return d1.d - d2.d;
}

int main ()
{
    struct p pessoas[6];
    int i;
    int ind_velho = 0;
    int ind_novo = 0;

    for (i = 0; i < 6; i++)
    {
        printf("\npessoa %d\n", i + 1);
        printf("nome: ");
        scanf("%s", pessoas[i].n);
        printf("dia nasc: ");
        scanf("%d", &pessoas[i].nasc.d);
        printf("mes nasc: ");
        scanf("%d", &pessoas[i].nasc.m);
        printf("ano nasc: ");
        scanf("%d", &pessoas[i].nasc.a);
    }

    for (i = 1; i < 6; i++)
    {
        if (comp_data(pessoas[i].nasc, pessoas[ind_velho].nasc) < 0)
        {
            ind_velho = i;
        }
        if (comp_data(pessoas[i].nasc, pessoas[ind_novo].nasc) > 0)
        {
            ind_novo = i;
        }
    }

    printf("\nmais velho: %s\n", pessoas[ind_velho].n);
    printf("mais novo: %s\n", pessoas[ind_novo].n);

    return 0;
}