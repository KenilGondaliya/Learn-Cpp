#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    int raw = 1;

    while (raw <= n)
    {
        int space = raw - 1;

        while (space)
        {
            cout << " ";
            space--;
        }

        int col = n - raw + 1; 
        // int col = raw; // formula 4
        // while (col <= n) // formula 4
        while (col)
        {
            // cout << raw; // formula 2
            cout << col; // formula 3
            // cout << "*"; // formula 1
            col--;
            // col++; // formula 4
        }

        cout << endl;
        raw++;
    }

    return 0;
}

// formula 1
// ****
//  ***
//   **
//    *

// formula 2
// 1111
//  222
//   33
//    4

// formula 3
// 4321
//  321
//   21
//    1

//formula 4
// 1234
//  234
//   34
//    4