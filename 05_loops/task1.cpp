#include <iostream>

using namespace std;

int main()
{

    int teaCups;

    cout << "Enter the number of Tea Cups to Server: ";
    cin >> teaCups;

    // While Loop
    while (teaCups > 0)
    {
        cout << "Serving a Cups of Tea "
             << teaCups << " remaining\n" << endl;
        teaCups--;
    }

    cout << "All Tea Cups are Served" << endl;

    return 0;
}