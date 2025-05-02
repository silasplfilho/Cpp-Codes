#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int a = 5/2;
    int num1, num2;
    num1 = 10;
    num2 = 5;

    int div = num1 / num2;
    int resto = num1 % num2;

    cout << "a divisao e: " << div << endl;
    cout << "o resto e: " << resto << endl;


    return 0;
}