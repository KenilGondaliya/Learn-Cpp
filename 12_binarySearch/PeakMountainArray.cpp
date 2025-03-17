#include <iostream>

using namespace std;

int peakIndexInMountainArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
    }

    return start;
}

int main()
{
    int arr[4] = {0, 10, 5, 2};

    peakIndexInMountainArray(arr, 4);

    cout << peakIndexInMountainArray(arr, 4) << endl;

    return 0;
}
