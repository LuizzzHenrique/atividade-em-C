#include <stdio.h>
#include <stdlib.h>

int main()
{int numero;

    printf("Qual a distância em metros?\n");
    scanf("%i",&numero);

int decimetro = numero*10;
int centimetro = numero*100;
int milimetro = numero*1000;

    printf("o resultado em decimetros:");
    printf ("%i\n", decimetro);
    printf("o resultado em centimetros:");
    printf ("%i\n", centimetro);
    printf("o resultado em milimetros:");
    printf ("%i\n", milimetro);

    return (0);
}
