
#include <iostream>

using namespace std;

int quadrado(int n){

    return n * n;
}

int main(){
    int s1, s2, s3;

    cout << "Entre tres inteiros: ";
    cin >> s1 >> s2 >> s3;

    if (s1 > 0 && s2 > 0 && s3 > 0 &&
        (quadrado(s1) + quadrado(s2) == quadrado(s3) ||
         quadrado(s2) + quadrado(s3) == quadrado(s1) ||
         quadrado(s3) + quadrado(s1) == quadrado(s2)) )
         {
            cout << s1 << " " << s2 << " " << s3 << " podem formar um triangulo reto \n";
         }
         else
         {
            cout << s1 << " " << s2 << " " << s3 << " nao podem formar triangulo reto \n";
         }
}


// programa que verifica se 3 numeros podem ser os lados de um
// triangulo reto.
//
/*
#include <iostream>
using namespace std;
// funcao que calcula o quadrado de um numero
int quadrado(int n)
    {
        return n * n;
    }

bool formaTriangulo(int a, int b, int c) {
        return (a + b > c) && (a + c > b) && (b + c > a);
    }

int main(){
        int s1, s2, s3;
        
        cout << "Entre tres inteiros: ";
        cin >> s1 >> s2 >> s3;
        if ( s1 > 0 && s2 > 0 && s3 > 0 && formaTriangulo(s1, s2, s3) &&
            (quadrado(s1) + quadrado(s2) == quadrado(s3) ||
            quadrado(s2) + quadrado(s3) == quadrado(s1) ||
            quadrado(s3) + quadrado(s1) == quadrado(s2)) )
            {
                cout << " " << s1 << " " << s2 << " " << s3 << " podem formar um triangulo reto\n";
            }
        else
            {
                cout << " " << s1 << " " << s2 << " " << s3 << " nao podem formar um triangulo reto\n";
            }
}
*/