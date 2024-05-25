#include <iostream>
using namespace std;

int main(){
    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    cout << "O valor da variavel varInt é: " << varInt << endl;
    cout << "O valor da variavel c é: " << c << endl;
    cout << "O valor da variavel pFlutuante é: " << pFlutuante << endl;
    cout << endl;
    cout << "Memoria da variavel varInt: " << sizeof(varInt) << " bytes" << endl;
    cout << "Memoria da variavel c: " << sizeof(c) << " bytes" << endl;
    cout << "Memoria da variavel pFlutuante: " << sizeof(pFlutuante) << " bytes" << endl;
    
    return 0;

}