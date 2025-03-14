#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i = 1;
    // char ch = 'A';
    int n = 5;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            // char ch = 'A' + j - 1; // formula 3
            char ch = 'A' + i + j - 2; // formula 4
            cout << ch;
            j++;
            // ch++; // formula 2
        }

        cout << endl;
        // ch++; // formula 1
        i++;
    }

    return 0;
}

// formula 1
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

// formula 2
// ABCDE
// FGHIJ
// KLMNO
// PQRST
// UVWXY

// formula 3
// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE

// formula 4
// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI
