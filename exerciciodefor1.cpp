#include <iostream>
using namespace std;
int main() {
    int i, f;

   
cout << "Digite o primeiro número: ";
cin >> i;
cout << "Digite o segundo número: ";
cin >> f;

   
    if (i % 2 == 0) {
        i++;
    }

    
cout << "Números ímpares entre " << i << " e " << f << ":\n";
    for (int i = i; i <= f; i += 2) {
        cout << i <<endl;
    }

    return 0;
}