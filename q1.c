#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);
    printf("notas: %.1f %.1f %.1f \n", n1, n2, n3);
    media = (n1 + n2 + n3)/3;
    printf("media: %.1f \n",media);

    if(media>=6)
        printf("APROVADO");
    else
        printf("REPROVADO");

    return 0;
}
