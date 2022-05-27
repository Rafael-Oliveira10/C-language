#include <stdio.h>

int main ()
{
    int idade;

    printf ("Favor informar idade:\n");
    scanf ("%i", &idade);

    if (idade < 18){
        printf ("Bebidas alcoolicas proibidas");
    } else
        printf ("Bebidas alcoolicas liberadas");

    return 0;
}
