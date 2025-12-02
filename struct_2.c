#include <stdio.h>
#include <math.h>

struct p
{
    float x;
    float y;
};

int main ()
{
    struct p p1;
    float dist;

    printf("ponto x: ");
    scanf("%f", &p1.x);
    printf("ponto y: ");
    scanf("%f", &p1.y);

    dist = sqrt(p1.x * p1.x + p1.y * p1.y);

    printf("distancia: %.2f\n", dist);

    return 0;
}