#include <iostream>

using namespace std;

int main()
{

    int chaiTemprature[5] = {85, 90, 88, 92, 89};

    cout << "Chai tempratures: ";
    for (int i = 0; i < 5; i++)
    {
        cout << chaiTemprature[i] << " degree C\n"
             << endl;
    }

    return 0;
}