#include <iostream> /*controla entrada-saida*/
#include <cmath> /*controla funcoes matematicas*/

using namespace std;
#define PI 3.14159

int main(){
    // definir variaveis
    int Raio;
    float Perim, Area;

    // Obter raio da circunferencia
    cout << "Entre com valor do raio: ";
    cin >> Raio;

    // Calcular perimetro do circulo
    Perim = 2 * PI * Raio;

    // Calcular area da circunferencia
    Area = PI * pow(Raio, 2);

    // Exibir resultados
    cout << "O perimetro da circunferencia de raio " << Raio << " eh " << Perim << endl;
    cout << "e a area eh " << Area << endl;

}