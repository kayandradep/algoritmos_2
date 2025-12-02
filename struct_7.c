#include <stdio.h>

struct h
{
    int h;
    int m;
    int s;
};

int main ()
{
    struct h horas[5];
    int i;
    int segs_max = -1;
    int indice_max = 0;
    int segs_atual;

    for (i = 0; i < 5; i++)
    {
        printf("\nhora %d\n", i + 1);
        printf("h: ");
        scanf("%d", &horas[i].h);
        printf("m: ");
        scanf("%d", &horas[i].m);
        printf("s: ");
        scanf("%d", &horas[i].s);

        segs_atual = horas[i].h * 3600 + horas[i].m * 60 + horas[i].s;

        if (segs_atual > segs_max)
        {
            segs_max = segs_atual;
            indice_max = i;
        }
    }

    printf("\nmaior hora\n");
    printf("%d:%d:%d\n", horas[indice_max].h, horas[indice_max].m, horas[indice_max].s);

    return 0;
}