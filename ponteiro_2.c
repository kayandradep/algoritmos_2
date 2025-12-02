#include <stdio.h>

int main ()
{
    int a, b;
    
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    
    if (&a > &b)
    {
        printf("conteudo maior endereco: %d\n", a);
    }
    else
    {
        printf("conteudo maior endereco: %d\n", b);
    }
    
    return 0;
}