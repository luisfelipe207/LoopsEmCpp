#include <iostream>
using namespace std;

int main() {

    int numero;
    cout << "Insira um numero: ";
    cin >> numero;
    int contador = 1;
    cout << "Numeros pares entre 1 e " << numero << ":" << endl;
    while (contador <= numero) {
        if (contador % 2 == 0) {
            cout << contador << endl;
        }
        contador++;
    }

    return 0;
}