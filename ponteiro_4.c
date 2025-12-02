#include <stdio.h>

int main ()
{
    float mat[3][3];
    float *ptr = (float *)mat;
    int i, j;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("endereco mat[%d][%d]: %p\n", i, j, (void *)(ptr + i * 3 + j));
        }
    }
    
    return 0;
}