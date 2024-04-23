#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;

    cout << "Digite um numero inteiro: ";
    cin >> numero;
    while (numero != 0) {
        int digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    cout << "A soma dos digitos do numero é: " << soma << endl;
    return 0;
}