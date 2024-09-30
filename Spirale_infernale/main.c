#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int suite_Fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }else if (n == 1)
    {
        return 1;
    }else
    {
        return suite_Fibonacci(n-1)+suite_Fibonacci(n-2);
    }
}

int nombre_premier(int nombre){

    int test=0;

    for (int i = 1; i <= nombre; i++)
    {
        if (nombre%i == 0)
        {
            test++;
        }
    }
    return (test == 2 && nombre > 1);
}
int premier_suivant(int nombre){
    int numero = nombre + 1;
    while (1)
    {
        if (nombre_premier(numero))
        {
            return numero;
        }
        numero++;
    }
    
}


int main(){
    int position_y = 44;
    int position_x = -36;

    int n = 21;
    int nombre_fibonacci = suite_Fibonacci(n);
    printf("Le %dème nombre de Fibonacci est : %d\n", n, nombre_fibonacci);

    int resultat_nombre_premier = premier_suivant(nombre_fibonacci);
    printf("Le premier nombre premier après %d est : %d\n", nombre_fibonacci, resultat_nombre_premier);

    position_y += resultat_nombre_premier;
    printf("La nouvelle position de Barnadé est (%d;%d).\n",position_x,position_y);
}
