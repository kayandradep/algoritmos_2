#include <stdio.h>

struct d
{
    int d;
    int m;
    int a;
};

int bissexto (int a)
{
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int dias_no_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

long int data_para_dias (struct d data)
{
    long int n_dias = 0;
    int i;

    for (i = 1; i < data.a; i++)
    {
        n_dias += 365 + bissexto(i);
    }

    for (i = 1; i < data.m; i++)
    {
        n_dias += dias_no_mes[i];
    }
    
    if (data.m > 2 && bissexto(data.a))
    {
        n_dias += 1;
    }

    n_dias += data.d;
    return n_dias;
}

int main ()
{
    struct d d1, d2;
    long int dias1, dias2, diferenca;
    
    printf("data 1 (d m a): ");
    scanf("%d %d %d", &d1.d, &d1.m, &d1.a);
    printf("data 2 (d m a): ");
    scanf("%d %d %d", &d2.d, &d2.m, &d2.a);

    dias1 = data_para_dias(d1);
    dias2 = data_para_dias(d2);

    diferenca = dias2 - dias1;
    
    if (diferenca < 0)
    {
        diferenca = -diferenca;
    }

    printf("diferenca: %ld dias\n", diferenca);

    return 0;
}