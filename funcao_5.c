#include <stdio.h>

void converte_tempo(int segs_total)
{
    int h, m, s;
    
    h = segs_total / 3600;
    segs_total = segs_total % 3600;
    m = segs_total / 60;
    s = segs_total % 60;
    
    printf("tempo: %d hrs, %d mins, %d segs\n", h, m, s);
}

int main()
{
    converte_tempo(3665);
    return 0;
}