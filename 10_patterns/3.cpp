#include <iostream>

using namespace std;

int main()
{
    int n = 3; // 1 2 3
    int i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

// formula 1
// 123
// 456
// 789
