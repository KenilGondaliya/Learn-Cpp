#include <iostream>
#include <string>
using namespace std;

//call by value
void pourChai(int cups)
{
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main()
{

    int chaiCups = 2;
    pourChai(chaiCups);

    cout << "Total cups  are " << chaiCups << endl;
    return 0;
}