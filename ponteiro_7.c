#include <stdio.h>

int str_ocorre (char *str1, char *str2)
{
    char *p1, *p2;
    
    while (*str1 != '\0')
    {
        p1 = str1;
        p2 = str2;

        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }
        
        if (*p2 == '\0')
        {
            return 1;
        }
        
        str1++;
    }
    
    return 0;
}

int main ()
{
    char s1[] = "exemplo de texto";
    char s2[] = "texto";
    
    if (str_ocorre(s1, s2))
    {
        printf("ocorreu\n");
    }
    else
    {
        printf("nao ocorreu\n");
    }
    
    return 0;
}