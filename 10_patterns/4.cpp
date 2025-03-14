#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int i = 0;
    int count = 1;

    while (i <= n)
    {
        int j = 1;
        // int value = i;

        while (i >= j)
        {
            // cout << i;
            // cout << "*";
            // cout << value;
            // cout << count;
            // count++;
            // value++;
            // cout << j;
            cout << j;
            // j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

// formula 1
// *
// **
// ***
// ****
// *****

// formula 2
//  1
//  22
//  333
//  4444
//  55555

// formula 3
//  1
//  23
//  456
//  78910
//  1112131415

// formula 4
// 1
// 23
// 345
// 4567
// 56789

// formula 5
// 1
// 21
// 321
// 4321