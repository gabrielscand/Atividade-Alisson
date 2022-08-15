#include <stdio.h>

int main(void) {

int n, i;
  printf("Digite um número: ");
  scanf("%d", &n);

  for(i = 1; n>1; n--){
      i = i * n;
  }
  
  printf("Resultado: %d", i);

  return 0;
}
