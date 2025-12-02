#include <stdio.h>

void ord (int *x, int *y, int *z)
{
    int t;

    if (*x > *y)
    {
        t = *x;
        *x = *y;
        *y = t;
    }
    if (*y > *z)
    {
        t = *y;
        *y = *z;
        *z = t;
    }
    if (*x > *y)
    {
        t = *x;
        *x = *y;
        *y = t;
    }
    
    printf("o: %d, %d, %d\n", *x, *y, *z);
}

int main ()
{
    int a = 3, b = 2, c = 1;
    ord(&a, &b, &c);
    return 0;
}