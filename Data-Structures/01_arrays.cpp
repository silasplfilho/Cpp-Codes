#include <iostream>
using namespace std;

int main()
{
    //total, average, inTwoYears
    float month1 = 100;
    float month2 = 220;
    float month3 = 300;
    float month4 = 0;
    float month5 = 200;
    float month6 = 250;

    float total = month1+month2+month3+month4+month5+month6;
    float average = total/6;
    float inTwoYears = average*24;

    cout<<"total = " << total << endl;
    cout<<"average = " << average << endl;
    cout<<"inTwoYears = " << inTwoYears << endl;

    system("pause>0");
}