#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int i = 1;

    while (i <= n)
    {
        int j = i;

        while (j <= n)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}

// *****
// ****
// ***
// **
// *