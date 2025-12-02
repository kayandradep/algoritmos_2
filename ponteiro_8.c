#include <stdio.h>

void preenche_vetor (int *vet, int tam, int val)
{
    int *ptr = vet;
    int *fim = vet + tam;
    
    while (ptr < fim)
    {
        *ptr = val;
        ptr++;
    }
}

int main ()
{
    int arr[5];
    int i;
    
    preenche_vetor(arr, 5, 10);
    
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}