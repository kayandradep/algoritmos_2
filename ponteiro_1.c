#include <stdio.h>

int main ()
{
    int a, b;
    
    if (&a > &b)
    {
        printf("maior endereco: %p\n", (void *)&a);
    }
    else
    {
        printf("maior endereco: %p\n", (void *)&b);
    }
    
    return 0;
}