#include <stdio.h>

int dias_tot(int a, int m, int d)
{
    int td = a * 365 + m * 30 + d;
    return td;
}

int main()
{
    int d = dias_tot(1, 2, 5);
    printf("dias: %d\n", d);
    return 0;
}