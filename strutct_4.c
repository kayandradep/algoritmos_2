#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct p
{
    float x;
    float y;
};

struct r
{
    struct p sup_esq;
    struct p inf_dir;
};

int main ()
{
    struct r ret;
    float l, a, area, per, diag;

    printf("x sup esq: ");
    scanf("%f", &ret.sup_esq.x);
    printf("y sup esq: ");
    scanf("%f", &ret.sup_esq.y);
    printf("x inf dir: ");
    scanf("%f", &ret.inf_dir.x);
    printf("y inf dir: ");
    scanf("%f", &ret.inf_dir.y);

    l = fabs(ret.inf_dir.x - ret.sup_esq.x);
    a = fabs(ret.inf_dir.y - ret.sup_esq.y);
    
    area = l * a;
    per = 2 * (l + a);
    diag = sqrt(l * l + a * a);

    printf("area: %.2f\n", area);
    printf("perimetro: %.2f\n", per);
    printf("diagonal: %.2f\n", diag);

    return 0;
}