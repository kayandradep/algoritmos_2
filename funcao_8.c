#include <stdio.h>

void cat_nad(int i, char *c)
{
    if (i >= 5 && i <= 7)
    {
        sprintf(c, "ia");
    } 
    else if (i >= 8 && i <= 10)
    {
        sprintf(c, "ib");
    } 
    else if (i >= 11 && i <= 13)
    {
        sprintf(c, "ja");
    } 
    else if (i >= 14 && i <= 17)
    {
        sprintf(c, "jb");
    } 
    else if (i >= 18)
    {
        sprintf(c, "ad");
    } 
    else
    {
        sprintf(c, "sem");
    }
}

int main()
{
    char c[10];
    cat_nad(19, c);
    printf("cat: %s\n", c);
    return 0;
}