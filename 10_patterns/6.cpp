#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int i = 0;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

// formula 5
// 1
// 21
// 321
// 4321