#include <iostream>
using namespace std;

// Declaración de la función
int sumar(int a, int b) {
    int resultado = a + b;
    return resultado;
}
int main() {
    int x = 5, y = 3;
    int total = sumar(x, y); // llamada a la función
    cout << "La suma es: " << total << endl;
    return 0;
}
