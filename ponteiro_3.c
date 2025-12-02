#include <stdio.h>

int main ()
{
    float arr[10];
    float *ptr = arr;
    int i;
    
    for (i = 0; i < 10; i++)
    {
        printf("endereco arr[%d]: %p\n", i, (void *)(ptr + i));
    }
    
    return 0;
}