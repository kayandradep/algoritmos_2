#include <stdio.h>

int sinal (int v)
{
    if (v > 0)
    {
        return 1;
    }
    else if (v < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    printf("sinal: %d\n", sinal(5));
    return 0;
}