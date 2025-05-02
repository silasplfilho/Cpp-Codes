#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int a = 0;
    short int b = 0;
    long int c = 0;

    int a2 = 0;
    signed int b2 = -10;
    unsigned int c2= -10;

    cout << sizeof(a) << " - " << a2 << endl;
    cout << sizeof(b) << " - " << b2 << endl;
    cout << sizeof(c) << " - " << c2 << endl;

    char caracter = 127;
    char caracter2 = -127;

    return 0;
}