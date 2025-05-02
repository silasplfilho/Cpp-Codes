#include <iostream>

using namespace std;

// funcao alo()
void alo(void){
    cout << "Alo" << endl;
}

// funcao main()
int main(){
    int i;
    
    i = 1;
    while(i <= 3){
        alo();
        i = i + 1;
    }
}