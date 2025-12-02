#include <stdio.h>
#include <stdlib.h>

struct p
{
    float x;
    float y;
};

struct r
{
    struct p p1;
    struct p p2;
};

int main ()
{
    struct r ret;
    struct p ponto;
    float min_x, max_x, min_y, max_y;

    printf("r p1 x: ");
    scanf("%f", &ret.p1.x);
    printf("r p1 y: ");
    scanf("%f", &ret.p1.y);
    printf("r p2 x: ");
    scanf("%f", &ret.p2.x);
    printf("r p2 y: ");
    scanf("%f", &ret.p2.y);

    printf("ponto x: ");
    scanf("%f", &ponto.x);
    printf("ponto y: ");
    scanf("%f", &ponto.y);
    
    if (ret.p1.x < ret.p2.x)
    {
        min_x = ret.p1.x;
        max_x = ret.p2.x;
    }
    else
    {
        min_x = ret.p2.x;
        max_x = ret.p1.x;
    }

    if (ret.p1.y < ret.p2.y)
    {
        min_y = ret.p1.y;
        max_y = ret.p2.y;
    }
    else
    {
        min_y = ret.p2.y;
        max_y = ret.p1.y;
    }

    if (ponto.x >= min_x && ponto.x <= max_x && ponto.y >= min_y && ponto.y <= max_y)
    {
        printf("dentro\n");
    }
    else
    {
        printf("fora\n");
    }

    return 0;
}