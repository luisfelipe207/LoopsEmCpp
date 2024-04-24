#include <iostream>

int main() {
int n_termo, a = 0, b = 1, aux;
  printf("Digite o número de termos da sequência de Fibonacci: ");
  scanf("%d", &n_termo);
  i= 0;
  while (i < n_termo) {
    if (i <= 1) {
      aux = i;
    } else {
      aux = a + b;
      a = b;
      b = aux;
    }
    printf("%d ", aux);
    i++;
  }
  printf("\n");

  return 0;
}