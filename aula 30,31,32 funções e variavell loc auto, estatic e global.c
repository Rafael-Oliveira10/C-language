#include <stdio.h>
//Variavel Global
int gVariavelGlobal = 2;

//Variavel Local Estatica::::::::::::::::
int main (void){

    void teste (void);

    printf ("Global = %i\n", gVariavelGlobal);
    teste ();
    teste ();
    teste ();

    return 0;
}

void teste (void){

//Variavel Local automatica :::
    int variavelLocal = 2;
    variavelLocal *= 2;

//Variavel Local Estatica :::
    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    printf ("Local Automatica = %i\n", variavelLocal);
    printf ("Local Estatica = %i\n", variavelLocalEstatica);
    printf ("Global = %i\n", gVariavelGlobal);

}

