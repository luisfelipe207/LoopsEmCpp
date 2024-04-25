#include <iostream>
using namespace std;

int main() {
    int numLinhas;

    
    cout << "Digite o número de linhas para asteriscos: ";
    cin >> numLinhas;

    if (numLinhas < 1) {
    cout << "insira um número positivo maior que zero." << endl;
    return 0; 
    }
    for (int linha = 1; linha <= numLinhas; linha++) {  
    for (int coluna = 1; coluna <= linha; coluna++) {
    cout << "*";
    }
    
    cout << endl;
    }

    return 0;
}