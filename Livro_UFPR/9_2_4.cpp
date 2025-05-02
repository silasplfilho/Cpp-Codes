#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int linha, coluna;
    
    linha = 1;
    while (linha < 5){
        coluna = 1;
        while (coluna < 5){
            cout << "Produto linha " << linha << " * coluna " << coluna << ": " << setw(3) << linha * coluna << endl;
            coluna = coluna + 1;
        }
        linha = linha + 1;
    }
    cout << endl;
}