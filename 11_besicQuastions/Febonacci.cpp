#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int a = 0;
    int b = 1;

    cout << a << " ";
    cout << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }

    return 0;
}

// Febonacci Series

// 0 1 1 2 3 5 8 13 21 ....