#include <stdio.h>

int main()
{
    /*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
    forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo, escrever a mensagem. Considere as seguintes propriedades:
    a. O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
    b. Equiláteros: tem os comprimentos dos três lados iguais;
    c. Isósceles: tem os comprimentos de dois lados iguais;
    d. Escaleno: tem os comprimentos dos três lados diferentes.  */

    int x, y, z;

    printf("Informe 3 lados de um triangulo:\n");
    scanf("%d %d %d", &x, &y, &z);

    if((x < y + z) && (y < x + z) && (z < x + y)){
        if(x == y && x == z)
            printf("\nEsse triangulo e equilatero.\n");
        else if((x == y) || (x == z) || (y == z))
            printf("\nEsse triangulo e Isoceles\n");
        else
            printf("\nEsse triangulo e Escaleno\n");
    } else
        printf("\nNao e um triangulo.\n");

    return 0;
}