#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int i = 1;

    while (i <= n)
    {
        int j = i;
        while (j <= n)
        {
            cout << j - i + 1;
            j++;
        }

        int star = n - i - 2;
        
        while (star <= i)
        {
            cout << "*";
            star++;
        }

        int k = i;

        while (k<=n)
        {
            cout << n - k + 1;
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}