#include <stdio.h>

int main (void)
{
    float calcularAreaRetang (float x, float y);
    float area = calcularAreaRetang (4.8, 11.4);

    printf ("A area e': %f", area);

    return 0;
}

float calcularAreaRetang (float base, float altura)
{
    float area = base * altura;


    return area;
}
