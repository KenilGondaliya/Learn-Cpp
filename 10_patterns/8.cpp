#include <iostream>
#include <string>

using namespace std;

int main()
{
    int raw = 1;
    int n = 5;
    // char ch = 'A'; // formula 2

    while (raw <= n)
    {
        int col = 1;

        while (col <= raw)
        {
            // char ch = 'A' + raw - 1; // formula 1
            char ch = 'A' + raw + col - 2; // formula 3
            cout << ch;
            ch++;
            col++;
        }

        cout << endl;
        raw++;
    }

    return 0;
}

// formula 1
// A
// BB
// CCC
// DDDD
// EEEEE

// formula 2
// A
// BC
// DEF
// GHIJ
// KLMNO

//formula 3
// A
// BC
// CDE
// DEFG
// EFGHI