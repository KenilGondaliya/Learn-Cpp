#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n = -10; // 1010

    n = -n;

    cout << n;

    int ans = 0;
    int place = 1;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        // cout << "Bit: " << bit << endl;

        ans = (bit * place) + ans; // 1

        place *= 10;

        // cout << "Ans: " << ans << endl;

        n = n >> 1;
        i++;
    }

    cout << " Answer is " << ans << endl;

    return 0;
}