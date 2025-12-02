#include <stdio.h>

struct p
{
    char n[50];
    int i;
    char end[100];
};

int main ()
{
    struct p pes;

    printf("nome: ");
    scanf("%s", pes.n);
    printf("idade: ");
    scanf("%d", &pes.i);
    printf("end: ");
    scanf("%s", pes.end);

    printf("\n");
    printf("n: %s\n", pes.n);
    printf("i: %d\n", pes.i);
    printf("e: %s\n", pes.end);

    return 0;
}