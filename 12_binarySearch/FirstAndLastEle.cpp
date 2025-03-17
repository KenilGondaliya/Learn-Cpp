#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // right side
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left side
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // right side
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left side
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int odd[5] = {1, 3, 2, 5, 5};

    // cout << " First Occurrence of 5 is a " << firstOcc(odd, 5, 5) << endl;
    // cout << " Last Occurrence of 5 is a " << lastOcc(odd, 5, 5) << endl;

    int totalNum = (lastOcc(odd, 5, 5) - firstOcc(odd, 5, 5)) + 1;

    cout << totalNum << endl;

    return 0;
}

// total num is find total number of element/accurence in array