#include <stdio.h>

char* ok(char t[])
{
    printf("%s", t);
    return "ok";
}

int main()
{
    char t[80] = "nao aguento mais\n";
    printf("%s\n", ok(t));
}