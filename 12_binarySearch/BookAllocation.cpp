#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > mid)
        {
            return false;
        }

        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }

    return true;
}

int BookAllocate(vector<int> arr, int n, int m)
{
    if (m > n)
        return -1;

    int s = *max_element(arr.begin(), arr.end());  // 90
    int e = accumulate(arr.begin(), arr.end(), 0); // 203
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
};

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int m = 2;
    int n = 4;

    cout << BookAllocate(arr, n, m);

    return 0;
}