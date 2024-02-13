#include "trick.h"
int main() {
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "Tabuada de " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
