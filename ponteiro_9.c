#include <stdio.h>

void imprime_vetor (int *vet, int tam)
{
    int *ptr = vet;
    int *fim = vet + tam;
    
    while (ptr < fim)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main ()
{
    int arr[] = {1, 2, 3, 4, 5};
    imprime_vetor(arr, 5);
    return 0;
}