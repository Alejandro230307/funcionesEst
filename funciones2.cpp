
#include <iostream>
using namespace std;

// Función que retorna el mayor de tres números
int mayorDeTres(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int num1, num2, num3;

    cout << "Ingresa tres números: \n";
    cin >> num1 >> num2 >> num3;

    int mayor = mayorDeTres(num1, num2, num3);
    cout << "El mayor es: " << mayor << endl;

    return 0;
}
