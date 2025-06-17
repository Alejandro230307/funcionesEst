#include <iostream>
using namespace std;
double area (double radio){
    return (radio * 3.1416 * radio);
}
int main (void){
    float radio;
    cout <<"Ingrese el radio del circulo que desea conocer su area: \n";
    cin >> radio;
    cout <<"El area del circulo de radio " << radio << " es: " << area (radio) <<" \n";
    return 0;
}