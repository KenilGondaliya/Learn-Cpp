#include <iostream>
using namespace std;

int squareRoot(int n)
{
    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int square = mid * mid;
        int ans = -1;
        ;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        return ans;
    }

    return -1;
}

long long int floorSqrt(int n)
{
    int s = 0;
    int e = n;
    long long int ans = -1;

    while (s <= e)
    {

        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{

    double factor = 1;
    double ans = tempSol;
    for (double i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 37;

    // cout << floorSqrt(n) << endl;

    int tempSol = floorSqrt(n);

    cout << "Answer Is : " << morePrecision(n, 3, tempSol);
    return 0;
}