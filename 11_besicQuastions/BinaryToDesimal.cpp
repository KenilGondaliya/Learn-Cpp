#include <iostream>

using namespace std;

int main()
{
    int n = 101;

    int ans = 0;
    int place = 1;

    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + place;
        }
        n = n / 10;
        place *= 2;
    }

    cout << ans << endl;

    return 0;
}