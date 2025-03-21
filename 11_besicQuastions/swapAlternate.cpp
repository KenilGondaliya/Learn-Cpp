#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void swapAlternate(int arr[], int size)
{

    int temp = 0;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            // swap(arr[i], arr[i + 1]);
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[6] = {1, 2, 3, 4, 5, 6};

    swapAlternate(arr, 5);
    swapAlternate(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}