#include <stdio.h>
#include <math.h>

struct p
{
    float x;
    float y;
};

int main ()
{
    struct p p1, p2;
    float dist;

    printf("p1 x: ");
    scanf("%f", &p1.x);
    printf("p1 y: ");
    scanf("%f", &p1.y);

    printf("p2 x: ");
    scanf("%f", &p2.x);
    printf("p2 y: ");
    scanf("%f", &p2.y);

    dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("distancia: %.2f\n", dist);

    return 0;
}