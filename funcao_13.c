#include <stdio.h>

void tri (float x, float y, float z)
{
    if (x < y + z && y < x + z && z < x + y)
    {
        if (x == y && y == z)
        {
            printf("eq\n");
        }
        else if (x == y || x == z || y == z)
        {
            printf("iso\n");
        }
        else
        {
            printf("esc\n");
        }
    }
    else
    {
        printf("nao t\n");
    }
}

int main ()
{
    tri(5, 5, 5);
    return 0;
}