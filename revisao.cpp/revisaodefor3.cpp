#include <iostream> 
using namespace std;

int main() {
             int arr[] = {10, 20, 30, 40, 50, 60};
        int tamanho = (sizeof(arr) / sizeof(arr[0]));
    
        for (size_t i = 0; i < tamanho; i++)
        {
            cout << arr[i] << endl;
        }

 return 0;
    
}
