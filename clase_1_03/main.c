#include <stdio.h>
#include <stdlib.h>

int main()
{
    pedirSumar();
    return 0;

}

int pedirSumar()
{
    int valorA;
    int valorB;
    int resultado;

    printf("Ingrese un valor: ");
    scanf("%d",&valorA);
    printf("Ingrese otro valor: ");
    scanf("%d",&valorB);
    resultado= valorA + valorB;

    printf("El resultado de la suma es: %d", resultado);
    return 0;

}

