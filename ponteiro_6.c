#include <stdio.h>

int main ()
{
    int arr[5];
    int *ptr = arr;
    int i;
    
    printf("digite 5 inteiros:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", (ptr + i));
    }
    
    printf("\nenderecos de pares:\n");
    for (i = 0; i < 5; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            printf("%p\n", (void *)(ptr + i));
        }
    }
    
    return 0;
}