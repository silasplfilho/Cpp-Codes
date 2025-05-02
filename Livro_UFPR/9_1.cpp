#include <iostream>

using namespace std;

int main (){
    int total, num;

    total = 0;
    while(total < 20){
        cout << "Total = " << total << endl;
        cout << "Entre com um numero: ";
        cin >> num;

        total = total + num;
    }
}