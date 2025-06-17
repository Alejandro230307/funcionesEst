#include <iostream>
using namespace std;
int fact(int n1 ){
    int resul = 1;
    for (int i = 1; i <= n1; i++)
    {
        resul *= i;
    }
    return resul;
}
int main (void){
    int num;
    cout <<"Ingrese el numero de cual desea conocer su factorial bro: \n";
    cin >> num;
    cout <<"El factorial del numero es " << num << " es: "<< fact (num) << " \n";
    return 0;
}