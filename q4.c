#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n%2 == 0)
        printf("PAR \n");
    else
        printf("IMPAR \n");

    if(n>0)
        printf("POSITIVO");
    else
        printf("NEGATIVO");









    return 0;
}
