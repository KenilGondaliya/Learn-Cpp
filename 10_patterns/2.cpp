#include <iostream>

using namespace std;

int main()
{
    int n = 3; // 1 2 3
    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << j;
            // cout << n- j + 1; // formula 2
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

// formula 1
// 123
// 123
// 123

// formula 2
//  321
//  321
//  321