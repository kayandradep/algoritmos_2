#include <stdio.h>

struct al
{
    int mat;
    char n[50];
    float not[3];
    float med;
};

int main ()
{
    struct al turma[5];
    int i, j;
    int maior_i = 0;
    float maior_m = -1.0;

    for (i = 0; i < 5; i++)
    {
        printf("\naluno %d\n", i + 1);
        printf("mat: ");
        scanf("%d", &turma[i].mat);
        printf("nome: ");
        scanf("%s", turma[i].n);
        
        turma[i].med = 0;
        for (j = 0; j < 3; j++)
        {
            printf("nota %d: ", j + 1);
            scanf("%f", &turma[i].not[j]);
            turma[i].med += turma[i].not[j];
        }
        turma[i].med /= 3.0;

        if (turma[i].med > maior_m)
        {
            maior_m = turma[i].med;
            maior_i = i;
        }
    }

    printf("\nmaior media\n");
    printf("nome: %s\n", turma[maior_i].n);
    printf("notas: %.1f, %.1f, %.1f\n", turma[maior_i].not[0], turma[maior_i].not[1], turma[maior_i].not[2]);
    printf("media: %.2f\n", turma[maior_i].med);

    return 0;
}