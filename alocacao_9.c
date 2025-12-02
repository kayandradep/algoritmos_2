#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inverte_string (char *str)
{
    int len = strlen(str);
    char *invertida = (char *)malloc((len + 1) * sizeof(char));
    int i, j;
    
    if (invertida == NULL)
    {
        return NULL;
    }
    
    for (i = 0, j = len - 1; i < len; i++, j--)
    {
        invertida[i] = str[j];
    }
    invertida[len] = '\0';
    
    return invertida;
}

int main ()
{
    char original[] = "abacaxi";
    char *invertida = inverte_string(original);
    
    if (invertida != NULL)
    {
        printf("original: %s\n", original);
        printf("invertida: %s\n", invertida);
        free(invertida);
    }
    else
    {
        printf("erro de alocacao\n");
    }
    
    return 0;
}