#include <iostream>

using namespace std;

int pivotArr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start;
}

int binarySearch(int arr[], int pivot, int n, int key)
{
    int start = 0;
    int end = n;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int searchRoatedArr(int arr[], int n, int key)
{
    int pivot = pivotArr(arr, 5);

    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, key);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    int k = 2;

    cout << searchRoatedArr(arr, 5, 2) << endl;

    return 0;
}