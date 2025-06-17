#include <iostream>
using namespace std;

// Función que determina si un número es par
bool esPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int n;
    cout << "Ingresa un número: ";
    cin >> n;

    if (esPar(n))
        cout << "El número es par." << endl;
    else
        cout << "El número es impar." << endl;

    return 0;
}
