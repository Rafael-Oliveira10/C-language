#include <stdio.h>

int main ()
{
    int base;
    int altura;
    int area;
    //output
    printf ("digite o valor da base:");
    //input
        scanf ("%i", &base);

    printf ("digite o valor da altura:");

        scanf ("%i", &altura);

    area = base * altura;

    printf ("o valor da area do retangulo e' = %i", area);

    return 0;
}
