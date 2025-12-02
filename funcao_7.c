#include <stdio.h>

int perfeito(int n)
{
    int i;
    int s = 0;
    
    if(n <= 0)
    {
        return 0;
    }
    
    for(i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    
    if (s == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("6 e p? %d\n", perfeito(6));
    return 0;
}