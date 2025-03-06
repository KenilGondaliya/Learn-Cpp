#include <iostream>

using namespace std;

int main()
{

    int cups;

    cout << "Enter the number of cups: ";
    cin >> cups;

    if (cups > 20)
    {
        cout << "You will get a Gold Badge" << endl;
    }
    else if (cups >= 10 && cups <= 20)
    {
        cout << "You will get a Silver Badge" << endl;
    }
    else
    {
        cout << "No badge" << endl;
    }

    return 0;
}