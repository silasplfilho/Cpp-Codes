#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float num1, num2;
    char op;

    // obter expressao da entrada
    cout << "Entre com numero operador numero \n";
    cin >> num1 >> op >> num2;

    // mostra resultado operacao
    if (op == '+')
        cout << " = " << setprecision(2) << num1 + num2;
    else if (op == '-')
        cout << " = " << setprecision(2) << num1 - num2;
    else if (op == '/')
        cout << " = " << setprecision(2) << num1 / num2;
    else if (op == '*')
        cout << " = " << setprecision(2) << num1 * num2;
    else
        cout << " Operador invalido.";
    cout << endl;
}