#include <stdio.h>

int par_imp (int v)
{
    if (v % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    printf("par/imp: %d\n", par_imp(5));
    return 0;
}