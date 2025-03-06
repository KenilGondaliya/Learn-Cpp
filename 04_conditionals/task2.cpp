#include <iostream>

using namespace std;

int main()
{
    int hour;

    cout << "Enter the hour(0-23): ";
    cin >> hour;

    if (hour >= 8 && hour <= 18)
    {
        cout << "The office is open" << endl;
    }
    else
    {
        cout << "The office is closed" << endl;
    }

    return 0;
}