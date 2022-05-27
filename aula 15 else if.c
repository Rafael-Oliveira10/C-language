#include <stdio.h>

int main ()
{
    int idade;

    printf("Informe idade\n");
    scanf ("%i", &idade);

    if (idade <= 5)
        printf ("bebe\n");

        else if (idade > 5 && idade <= 10)
            printf ("Crianca\n");

        else if (idade > 10 && idade <= 18)
            printf ("Adolescente\n");

        else if (idade > 18 && idade <= 50)
            printf ("adulto\n");

        else printf ("idoso\n");


    return 0;
}
