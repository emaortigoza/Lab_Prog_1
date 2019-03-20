#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ingrese un valor: ");
    int valorA;
    scanf("%d",&valorA);
    printf("Ingrese otro valor: ");
    int valorB;
    scanf("%d",&valorB);
    int resultado;
    resultado= valorA + valorB;

    printf("El resultado de la suma es: %d", resultado);
    return 0;
}
