#include <stdio.h>
#include <stdlib.h>

int main()
{
   float n1, n2, n3;

   printf("Digite um numero: ");
   scanf("%f", &n1);
   printf("Digite um segundo numero: ");
   scanf("%f", &n2);
   printf("Digite um terceiro numero: ");
   scanf("%f", &n3);

   if(n1>n2 && n1>n3)
    printf("N1 eh maior");
   else if(n2>n1 && n2>n3)
    printf("N2 eh maior");
   else
    printf("N3 eh maior");



    return 0;
}
