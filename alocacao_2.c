#include <stdio.h>

struct aluno
{
    int mat;
    char n[50];
    float not[3];
};

int main ()
{
    printf("tamanho da estrutura aluno: %zu bytes\n", sizeof(struct aluno));
    return 0;
}