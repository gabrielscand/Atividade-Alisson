#include <stdio.h>

int main(void) {
  
  int i = 0, soma = 0;

while (i<=100){
  soma = soma + i;
  i = i + 2; 
  }
  printf("%d \n", soma);
  
  return 0;
}
