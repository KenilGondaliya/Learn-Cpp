#include <iostream>

using namespace std;

int main()
{
    int chaiSales[3][7] = {
        {50, 60, 75, 78, 79, 80, 60},
        {57, 69, 74, 73, 59, 12, 90},
        {25, 12, 25, 88, 99, 47, 32}};

    for (int i = 0; i < 3; i++)
    {
        cout << "i am at shop:" << i + 1 << "\n";
        for (int j = 0; j < 7; j++)
        {
            cout << chaiSales[i][j] << "cups" << endl;
        }
    }

    return 0;
}