#include <iostream>
using namespace std;
float conver( float temperatura ){
    return (temperatura * 9.0 / 5.0) + 32;
}
int main (void){
    int celsi;
    cout <<"Ingrese su temperatura en grados celsius \n";
    cin >> celsi;
    cout <<"Su temperatura que usted ingreso en celsius " << celsi <<" Tiene una convercion de " << conver(celsi) <<" En grados farengeith \n";
    return 0;
}