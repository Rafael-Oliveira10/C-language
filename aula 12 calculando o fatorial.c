#include <stdio.h>

int main ()
{
    int fatorial = 6;
    int resposta = 1;

    for ( ; fatorial >= 1; --fatorial){

    resposta = fatorial;

    }
    printf ("O numero fatorial e' %i", resposta);

    return 0;
}
