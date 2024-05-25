#include <iostream>

using namespace std;

int main ()
{
    int i;
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    for(i=1; i <=n; i++)
    cout << "Valor do quadrado de " << i << " = " << i * i << endl;
    system("PAUSE");
    return 0;
}