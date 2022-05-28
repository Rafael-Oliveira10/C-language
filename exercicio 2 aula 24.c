#include <stdio.h>

int main (void)
{
    float kmH [5] = {0};
    float distancia = 0;
    float media = 0;

        printf ("Digite os kilometros percorridos\n");

        for (int i = 0;i < 5; ++i)
            scanf ("%f", &kmH[i]);

        for (int i = 0;i < 5; ++i)
            distancia += kmH[i];

        media = distancia / 5;

        printf ("A media de Km por hora e': %f\n", media);
    return 0;
}
