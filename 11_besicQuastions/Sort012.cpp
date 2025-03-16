#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortOne(int arr[], int size)
{
    int low = 0;
    int mid = 0;
    int high = size - 1;

    while (mid < high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int arr[7] = {2, 2, 2, 1, 1, 1, 0};

    sortOne(arr, 7);
    printArray(arr, 7);
    return 0;
}