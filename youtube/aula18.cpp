#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num1, num2;

    cout << "Seja bem vindo a calculadora" << endl;
    cout << "digite o primeiro numero" << endl;
    cin >> num1;

    cout << "Seja bem vindo a calculadora" << endl;
    cout << "digite o segundo numero" << endl;
    cin >> num2;

    cout << "a soma e: " << num1 + num2 << endl;
    cout << "a sub e: " << num1 - num2 << endl;
    cout << "a multi e: " << num1 * num2 << endl;
    cout << "a div e: " << num1 / num2 << endl;

    return 0;
}