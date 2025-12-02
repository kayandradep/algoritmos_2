#include <stdio.h>

int main ()
{
    int a;
    int *b;
    int **c;
    int ***d;
    
    b = &a;
    c = &b;
    d = &c;
    
    printf("valor de a: ");
    scanf("%d", &a);
    
    printf("\ndobro: %d\n", (*b) * 2);
    printf("triplo: %d\n", (**c) * 3);
    printf("quadruplo: %d\n", (***d) * 4);
    
    return 0;
}