// Lamda Functions
#include <iostream>
#include <string>
using namespace std;

int main()
{

    // lamda
    auto preparedChai = [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(5);

    return 0;
}