#include <iostream>

using namespace std;

int main(){
    cout << "informe um numero: " << endl;
    
    int num1 = 0;
    cin >> num1;

    cout<< "informe outro numero: " << endl;
    int num2 = 0;
    cin >> num2;

    cout << "os numeros digitados foram: "
            << num1 
            << " e "
            << num2
            << endl;

    return 0;
}