#include <stdio.h>

char conceito (float m)
{
    if (m >= 9.0)
    {
        return 'a';
    }
    else if (m >= 7.0)
    {
        return 'b';
    }
    else if (m >= 5.0)
    {
        return 'c';
    }
    else
    {
        return 'd';
    }
}

int main ()
{
    float m = 7.5;
    printf("c: %c\n", conceito(m));
    return 0;
}