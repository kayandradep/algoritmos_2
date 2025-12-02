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
    
    printf("\ndobro:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i) * 2);
    }
    
    return 0;
}