#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número pra ver sua tabuada de multiplicação:  ");
    scanf("%d", &numero);
    for (int i = 1; 1 <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}