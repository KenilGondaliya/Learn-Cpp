#include <iostream>
#include <string>

using namespace std;

int main()
{
    int raw = 1;
    int n = 3;

    while (raw <= n)
    {
        int col = 1;
        char start = 'A' + raw - 1;
        while (col <= n)
        {
            cout << start;
            start++;
            col++;
        }

        cout << endl;
        raw++;
    }

    return 0;
}


//formula 1
// ABC
// BCD
// CDE
