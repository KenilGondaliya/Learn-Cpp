#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    int raw = 1;

    while (raw <= n)
    {
        int space = n - raw;

        while (space)
        {
            cout << " ";
            space--;
        }

        int col = 1;

        while (col <= raw)
        {
            cout << "*";
            col++;
        }

        cout << endl;
        raw++;
    }

    return 0;
}

//formula 1
//    *
//   **
//  ***
// ****
