#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c)
{
    float delta, x1, x2;

    if (a == 0)
    {
        printf("nao e possivel calcular: o a nao pode ser zero.\n");
        return;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("nao existe raiz real, delta e negativo.\n");
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raiz 1: %.2f\n", x1);
        printf("Raiz 2: %.2f\n", x2);
    }
}

int main()
{
    float a, b, c;

    printf("digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    bhaskara(a, b, c);

    return 0;
}
