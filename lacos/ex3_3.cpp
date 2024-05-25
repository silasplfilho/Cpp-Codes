#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    int n;

    cout << "valor: ";
    cin >> n;
    cout << "\nvalor " << setw(5) << "quadrado" << endl;
    for(i=1; i <= n; i++){
        cout << setw(5) << i;
        int n2 = i * i;
        cout << setw(9) << n2 << endl;
    }
    system("PAUSE");
    return 0;
}