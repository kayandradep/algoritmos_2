#include <stdio.h>

void texto(char t[])
{
    printf("%s", t);
}

int main()
{
    char t[80] = "atencao, teste\n";
    texto(t);
}